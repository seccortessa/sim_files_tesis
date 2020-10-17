package com.example.ex3p;

import android.Manifest;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.widget.Toast;
import android.util.Log;
import java.util.ArrayList;
import android.content.res.Configuration;
import androidx.core.app.ActivityCompat;
import androidx.fragment.app.Fragment;
import androidx.core.content.ContextCompat;
import com.google.android.material.tabs.TabLayout;
import androidx.viewpager.widget.ViewPager;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import android.widget.FrameLayout;
import android.view.View;
import android.widget.ImageButton;
import android.os.CountDownTimer;
import android.os.Build;
import androidx.core.content.res.ResourcesCompat;
import android.widget.TextView;
import java.util.Hashtable;

public class ex3p extends AppCompatActivity implements OnFragmentInteractionListener{
    private SectionsPagerAdapter mSectionsPagerAdapter;

    private ViewPager mViewPager;
    private InfoFragment infoFragment = null;
    private ViewPager mCameraScopePager;

    private boolean isWidgetsLayoutHidden = false;
     private Hashtable<Integer,TextView> textViews = new Hashtable<Integer,TextView>();
    private String[] scopeTitles = {"Scope1"};

    private ImageButton btnZoom = null;
    private final CountDownTimer timerZoomButton = new CountDownTimer(5000, 1000) {
        @Override
        public void onTick(long l) {
            if (btnZoom!=null) {
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB) {
                    btnZoom.setAlpha(0.5f + 0.1f*l);
                }
            }
        }

        @Override
        public void onFinish() {
            if (btnZoom != null) {
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB) {
                    btnZoom.setAlpha(0.4f);
                }
            }
        }
    };
    private void registerAndSetChartSettingsOfaScope(int i) {
        FrameLayout frameLayout = (FrameLayout) findViewById(
                getResources().getIdentifier("scopeLayout" + i, "id", getPackageName()));
        if (null == frameLayout) {
            Log.e("MainActivity", "registerAndSetChartSettingsOfaScope: frameLayout is null.");
            return;
        }
        ScopeHelper.getInstance().putAChartInLayout(i, frameLayout, this);
    }

    private boolean checkIfAllPermissionsGranted()
    {
        return true;
    }
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        //Uncomment the following line to specify a custom App Title
        //toolbar.setTitle("My custom Title");
        setSupportActionBar(toolbar);

        // Create a FragmentPagerAdapter that returns individual fragments
        mSectionsPagerAdapter = new SectionsPagerAdapter(getSupportFragmentManager());

        // Set up the ViewPager with the sections adapter.
        mViewPager = (ViewPager) findViewById(R.id.container);
        mViewPager.setAdapter(mSectionsPagerAdapter);
        mViewPager.setOffscreenPageLimit(SectionsPagerAdapter.getNumTabs()-1);

        TabLayout tabLayout = (TabLayout) findViewById(R.id.tabs);
        tabLayout.setupWithViewPager(mViewPager);

        thisClass = this;
     }

    private ex3p thisClass;
    private final Thread BgThread = new Thread() {
    @Override
    public void run() {
            String argv[] = new String[] {"MainActivity","ex3p"};
            naMain(argv, thisClass);
        }
    };

    public void flashMessage(final String inMessage) {
        runOnUiThread(new Runnable() {
              public void run() {
                    Toast.makeText(getBaseContext(), inMessage, Toast.LENGTH_SHORT).show();
              }
        });
    }

    protected void onDestroy() {
         if (BgThread.isAlive())
             naOnAppStateChange(6);
         super.onDestroy();
         System.exit(0); //to kill all our threads.
    }

	@Override
    public void onAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
        if (fragment instanceof InfoFragment) {
            this.infoFragment = (InfoFragment) fragment;
            infoFragment.setFragmentInteractionListener(this);
        }
        if (fragment instanceof AppFragment) {
            ((AppFragment)fragment).setFragmentInteractionListener(this);
        }
        if (fragment instanceof CameraScopeFragment) {
            ((CameraScopeFragment)fragment).setFragmentInteractionListener(this);
        }
    }

	@Override
    public void onFragmentCreate(String name) {

    }

    @Override
    public void onFragmentStart(String name) {
        switch (name) {
            case "Info":
               break;
            case "App":
                if (mCameraScopePager == null) {
                    registerCameraScopeLayout();
                }
                registerDataDisplays();
                break;
            case "dot1":
                registerAndSetChartSettingsOfaScope(1);
                break;
            default:
                break;
        }
    }

    @Override
    public void onFragmentResume(String name) {
        switch (name) {
            case "App":
                break;
            case "Info":
                if (checkIfAllPermissionsGranted()){
                    if (!BgThread.isAlive()) {
                        BgThread.start();
                    }
                }
                break;
            default:
                break;
        }
    }

    @Override
    public void onFragmentPause(String name) {
    }
    @Override
    protected void onResume() {
         super.onResume();
         if (BgThread.isAlive())
             naOnAppStateChange(3);
    }

    @Override
    protected void onPause() {
        if (BgThread.isAlive())
            naOnAppStateChange(4);
        super.onPause();
    }

    @Override
    public void onConfigurationChanged(Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
    }

    public void registerDataDisplays() {
    // bind text views for data display block;
    for (int i = 1; i <= 1; i++) {
            TextView textView = (TextView) findViewById(
            getResources().getIdentifier("DataDisplay" + i, "id", getPackageName()));
            textViews.put(i, textView);
        }
    }
    public void displayText(int id, byte[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    public void displayText(int id, short[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    public void displayText(int id, int[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    public void displayText(int id, long[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    public void displayText(int id, float[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    public void displayText(int id, double[] data, byte[] format) {
        String formatString = new String(format);
        String toDisplay = String.format(formatString, data[0]);
        if (data.length > 1) {
            for (int i = 1; i < data.length; i++)
                toDisplay += "\n" + String.format(formatString, data[i]);
        }
        updateTextViewById(id, toDisplay);
    }

    private void updateTextViewById(final int id, final String finalStringToDisplay) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                try {
                    textViews.get(id).setText(finalStringToDisplay);
                } catch (Exception ex) {
                    Log.e("ex3p.updateTextViewById", ex.getLocalizedMessage());
                }
            }
        });
    }
    public void initScope(final int scopeID, final int numInputPorts, final byte[] attribute, final float[] sampleTimes) {
        ScopeHelper scopeHelper = ScopeHelper.getInstance();
        scopeHelper.initScope(scopeID, numInputPorts, attribute, sampleTimes);
        if (!scopeHelper.checkIfScopeRegistered(scopeID)){
            Log.w("MainActivity", "Scope not registered.");
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    registerAndSetChartSettingsOfaScope(scopeID);
                }
            });
        }
        scopeHelper.setTitle(scopeID, scopeTitles[scopeID-1]);
    }

    public void cachePlotData(int scopeID, int portIdx, float[] data, int sigNumDims, int[] sigDims) {
        ScopeHelper.getInstance().cachePlotData(scopeID, portIdx, data, sigNumDims, sigDims);
    }

    public void plotData(int scopeID) {
        ScopeHelper.getInstance().plotData(scopeID);
    }
    private void registerCameraScopeLayout() {
        // Create the adapter that will return a fragment for each of the three
        // primary sections of the activity.
        CameraScopeSectionsPagerAdapter mCameraScopeAdapter = new CameraScopeSectionsPagerAdapter(getSupportFragmentManager());

        // Set up the ViewPager with the sections adapter.
        mCameraScopePager = (ViewPager) findViewById(R.id.cameraScopeContainer);
        mCameraScopePager.setOffscreenPageLimit(1);
        mCameraScopePager.setAdapter(mCameraScopeAdapter);

        TabLayout dotsLayout = (TabLayout) findViewById(R.id.dots);
        dotsLayout.setupWithViewPager(mCameraScopePager);

        btnZoom = (ImageButton) findViewById(R.id.btnZoom);
        btnZoom.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                view.setVisibility(View.INVISIBLE);
                View widgetsLayout = findViewById(R.id.auto_generated_widgets);
                if (isWidgetsLayoutHidden) {
                    widgetsLayout.setVisibility(View.VISIBLE);
                    isWidgetsLayoutHidden = false;
                    ((ImageButton)view).setImageDrawable(ResourcesCompat.getDrawable(getResources(), R.drawable.expand, null));
                } else {
                    widgetsLayout.setVisibility(View.GONE);
                    isWidgetsLayoutHidden = true;
                    ((ImageButton)view).setImageDrawable(ResourcesCompat.getDrawable(getResources(), R.drawable.shrink, null));
                }
                view.setVisibility(View.VISIBLE);
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB) {
                    view.setAlpha(1.0f);
                }
                timerZoomButton.start();
            }
        });
timerZoomButton.start();
    }
    private native int naMain(String[] argv, ex3p pThis);
    private native void naOnAppStateChange(int state);
    static {
        System.loadLibrary("ex3p");
    }

}
