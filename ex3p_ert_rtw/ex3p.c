/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ex3p.c
 *
 * Code generated for Simulink model 'ex3p'.
 *
 * Model version                  : 1.36
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Oct 18 14:50:39 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ex3p.h"
#include "ex3p_private.h"

/* Block signals (default storage) */
B_ex3p_T ex3p_B;

/* Continuous states */
X_ex3p_T ex3p_X;

/* Block states (default storage) */
DW_ex3p_T ex3p_DW;

/* Real-time model */
RT_MODEL_ex3p_T ex3p_M_;
RT_MODEL_ex3p_T *const ex3p_M = &ex3p_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ex3p_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  ex3p_step();
  ex3p_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  ex3p_step();
  ex3p_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model step function */
void ex3p_step(void)
{
  if (rtmIsMajorTimeStep(ex3p_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&ex3p_M->solverInfo,((ex3p_M->Timing.clockTick0+1)*
      ex3p_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ex3p_M)) {
    ex3p_M->Timing.t[0] = rtsiGetT(&ex3p_M->solverInfo);
  }

  {
    real_T rtb_Sum3;
    real_T rtb_Sum7;
    real_T rtb_Product8;
    real_T rtb_Product6;
    real_T rtb_Product4;
    char_T tmp[5];

    /* Trigonometry: '<Root>/Atan2' incorporates:
     *  Integrator: '<Root>/Integrator1'
     *  Integrator: '<Root>/Integrator2'
     */
    rtb_Sum7 = rt_atan2d_snf(ex3p_X.Integrator1_CSTATE,
      ex3p_X.Integrator2_CSTATE);

    /* Sum: '<Root>/Sum4' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    rtb_Sum3 = rtb_Sum7 + ex3p_P.Constant1_Value;

    /* Product: '<Root>/Product4' incorporates:
     *  Constant: '<Root>/Constant4'
     *  Constant: '<Root>/Constant5'
     *  Gain: '<Root>/Gain'
     *  Math: '<Root>/Exp'
     *  Product: '<Root>/Divide'
     *  Product: '<Root>/Product5'
     *
     * About '<Root>/Exp':
     *  Operator: exp
     */
    rtb_Product4 = exp(rtb_Sum3 * rtb_Sum3 / ex3p_P.Constant5_Value *
                       ex3p_P.Gain_Gain) * (ex3p_P.Constant4_Value * rtb_Sum3);

    /* Sum: '<Root>/Sum5' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    rtb_Sum3 = rtb_Sum7 + ex3p_P.Constant2_Value;

    /* Product: '<Root>/Product6' incorporates:
     *  Constant: '<Root>/Constant6'
     *  Constant: '<Root>/Constant7'
     *  Gain: '<Root>/Gain1'
     *  Math: '<Root>/Exp1'
     *  Product: '<Root>/Divide1'
     *  Product: '<Root>/Product7'
     *
     * About '<Root>/Exp1':
     *  Operator: exp
     */
    rtb_Product6 = exp(rtb_Sum3 * rtb_Sum3 / ex3p_P.Constant7_Value *
                       ex3p_P.Gain1_Gain) * (ex3p_P.Constant6_Value * rtb_Sum3);

    /* Product: '<Root>/Product8' incorporates:
     *  Constant: '<Root>/Constant8'
     *  Constant: '<Root>/Constant9'
     *  Gain: '<Root>/Gain9'
     *  Math: '<Root>/Exp2'
     *  Product: '<Root>/Divide2'
     *  Product: '<Root>/Product9'
     *
     * About '<Root>/Exp2':
     *  Operator: exp
     */
    rtb_Product8 = exp(rtb_Sum7 * rtb_Sum7 / ex3p_P.Constant9_Value *
                       ex3p_P.Gain9_Gain) * (ex3p_P.Constant8_Value * rtb_Sum7);

    /* Sum: '<Root>/Sum6' incorporates:
     *  Constant: '<Root>/Constant16'
     */
    rtb_Sum3 = rtb_Sum7 - ex3p_P.Constant16_Value;

    /* Sum: '<Root>/Sum7' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    rtb_Sum7 -= ex3p_P.Constant3_Value;

    /* Sum: '<Root>/Sum15' incorporates:
     *  Constant: '<Root>/Constant10'
     *  Constant: '<Root>/Constant11'
     *  Constant: '<Root>/Constant12'
     *  Constant: '<Root>/Constant13'
     *  Gain: '<Root>/Gain10'
     *  Gain: '<Root>/Gain11'
     *  Gain: '<Root>/Gain8'
     *  Integrator: '<Root>/Integrator'
     *  Math: '<Root>/Exp3'
     *  Math: '<Root>/Exp4'
     *  Product: '<Root>/Divide3'
     *  Product: '<Root>/Divide4'
     *  Product: '<Root>/Product10'
     *  Product: '<Root>/Product11'
     *  Product: '<Root>/Product12'
     *  Product: '<Root>/Product13'
     *  Sin: '<Root>/Sine Wave'
     *  Sum: '<Root>/Sum10'
     *  Sum: '<Root>/Sum8'
     *
     * About '<Root>/Exp3':
     *  Operator: exp
     *
     * About '<Root>/Exp4':
     *  Operator: exp
     */
    ex3p_B.z = ((exp(rtb_Sum3 * rtb_Sum3 / ex3p_P.Constant11_Value *
                     ex3p_P.Gain10_Gain) * (ex3p_P.Constant10_Value * rtb_Sum3)
                 + ((rtb_Product4 + rtb_Product6) + rtb_Product8)) + exp
                (rtb_Sum7 * rtb_Sum7 / ex3p_P.Constant13_Value *
                 ex3p_P.Gain11_Gain) * (ex3p_P.Constant12_Value * rtb_Sum7)) *
      ex3p_P.Gain8_Gain - (ex3p_X.Integrator_CSTATE - (sin(ex3p_P.SineWave_Freq *
      ex3p_M->Timing.t[0] + ex3p_P.SineWave_Phase) * ex3p_P.SineWave_Amp +
      ex3p_P.SineWave_Bias));

    /* Sum: '<Root>/Sum3' incorporates:
     *  Constant: '<Root>/Constant'
     *  Integrator: '<Root>/Integrator1'
     *  Integrator: '<Root>/Integrator2'
     *  Product: '<Root>/Product2'
     *  Product: '<Root>/Product3'
     *  Sqrt: '<Root>/Sqrt'
     *  Sum: '<Root>/Sum2'
     */
    rtb_Sum3 = ex3p_P.Constant_Value - sqrt(ex3p_X.Integrator2_CSTATE *
      ex3p_X.Integrator2_CSTATE + ex3p_X.Integrator1_CSTATE *
      ex3p_X.Integrator1_CSTATE);

    /* Sum: '<Root>/Sum1' incorporates:
     *  Constant: '<Root>/Constant15'
     *  Integrator: '<Root>/Integrator1'
     *  Integrator: '<Root>/Integrator2'
     *  Product: '<Root>/Product'
     *  Product: '<Root>/Product18'
     */
    ex3p_B.y = ex3p_X.Integrator1_CSTATE * rtb_Sum3 + ex3p_X.Integrator2_CSTATE *
      ex3p_P.Constant15_Value;

    /* Sum: '<Root>/Sum' incorporates:
     *  Constant: '<Root>/Constant15'
     *  Integrator: '<Root>/Integrator1'
     *  Integrator: '<Root>/Integrator2'
     *  Product: '<Root>/Product1'
     *  Product: '<Root>/Product19'
     */
    ex3p_B.x = ex3p_X.Integrator2_CSTATE * rtb_Sum3 - ex3p_X.Integrator1_CSTATE *
      ex3p_P.Constant15_Value;

    /* Gain: '<Root>/Gain2' incorporates:
     *  Integrator: '<Root>/Integrator'
     */
    ex3p_B.Gain2 = ex3p_P.Gain2_Gain * ex3p_X.Integrator_CSTATE;
    if (rtmIsMajorTimeStep(ex3p_M)) {
      /* Scope: '<Root>/Scope1' */
      /* Call plotting routine for a mobile target */
      {
        int_T scope1ID = 1;

        {
          int_T portIdx = 0;
          int_T signalWidth = 1;
          int_T sigNumDims = 1;
          int_T sigDims[1] = { 1 };

          real32_T up0[1];
          up0[0] = (real32_T)ex3p_B.Gain2;
          CACHE_PLOT_DATA(scope1ID,portIdx,up0,signalWidth,sigNumDims,sigDims);
        }

        PLOT_DATA(scope1ID);
      }

      /* End of Scope: '<Root>/Scope1' */

      /* Memory: '<S3>/Memory' */
      ex3p_B.Memory = ex3p_DW.Memory_PreviousInput;

      /* Sum: '<Root>/Sum9' incorporates:
       *  Constant: '<Root>/offsetConteo'
       *  Delay: '<Root>/Delay'
       */
      ex3p_B.Sum9 = ex3p_DW.Delay_DSTATE[0] - ex3p_P.offsetMaxFinder;
    }

    /* Switch: '<S3>/Reset' incorporates:
     *  Constant: '<S3>/Initial Condition'
     *  MinMax: '<S1>/MinMax'
     */
    if (ex3p_B.Sum9 != 0.0) {
      ex3p_B.Reset = ex3p_P.offsetMaxFinder;
    } else if ((ex3p_B.Gain2 > ex3p_B.Memory) || rtIsNaN(ex3p_B.Memory)) {
      /* MinMax: '<S1>/MinMax' */
      ex3p_B.Reset = ex3p_B.Gain2;
    } else {
      /* MinMax: '<S1>/MinMax' */
      ex3p_B.Reset = ex3p_B.Memory;
    }

    /* End of Switch: '<S3>/Reset' */
    if (rtmIsMajorTimeStep(ex3p_M)) {
      /* S-Function (sdspcount2): '<Root>/Counter' */
      if (ex3p_B.Sum9 != 0.0) {
        if (ex3p_DW.Counter_Count < 255) {
          ex3p_DW.Counter_Count++;
        } else {
          ex3p_DW.Counter_Count = 0U;
        }
      }

      rtb_Sum3 = ex3p_DW.Counter_Count;

      /* End of S-Function (sdspcount2): '<Root>/Counter' */

      /* MATLABSystem: '<S2>/DataDisplay' */
      tmp[0] = '%';
      tmp[1] = '.';
      tmp[2] = '6';
      tmp[3] = 'f';
      tmp[4] = '\x00';
      PUT_DATADISPLAY_DATA(&rtb_Sum3, 1.0, 9, 1, tmp);
    }
  }

  if (rtmIsMajorTimeStep(ex3p_M)) {
    int_T idxDelay;
    if (rtmIsMajorTimeStep(ex3p_M)) {
      /* Update for Memory: '<S3>/Memory' */
      ex3p_DW.Memory_PreviousInput = ex3p_B.Reset;

      /* Update for Delay: '<Root>/Delay' */
      for (idxDelay = 0; idxDelay < 24; idxDelay++) {
        ex3p_DW.Delay_DSTATE[idxDelay] = ex3p_DW.Delay_DSTATE[idxDelay + 1];
      }

      ex3p_DW.Delay_DSTATE[24] = ex3p_B.Reset;

      /* End of Update for Delay: '<Root>/Delay' */
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(ex3p_M)) {
    rt_ertODEUpdateContinuousStates(&ex3p_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++ex3p_M->Timing.clockTick0;
    ex3p_M->Timing.t[0] = rtsiGetSolverStopTime(&ex3p_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.008s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.008, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      ex3p_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void ex3p_derivatives(void)
{
  XDot_ex3p_T *_rtXdot;
  _rtXdot = ((XDot_ex3p_T *) ex3p_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = ex3p_B.z;

  /* Derivatives for Integrator: '<Root>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = ex3p_B.y;

  /* Derivatives for Integrator: '<Root>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = ex3p_B.x;
}

/* Model initialize function */
void ex3p_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ex3p_M->solverInfo, &ex3p_M->Timing.simTimeStep);
    rtsiSetTPtr(&ex3p_M->solverInfo, &rtmGetTPtr(ex3p_M));
    rtsiSetStepSizePtr(&ex3p_M->solverInfo, &ex3p_M->Timing.stepSize0);
    rtsiSetdXPtr(&ex3p_M->solverInfo, &ex3p_M->derivs);
    rtsiSetContStatesPtr(&ex3p_M->solverInfo, (real_T **) &ex3p_M->contStates);
    rtsiSetNumContStatesPtr(&ex3p_M->solverInfo, &ex3p_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ex3p_M->solverInfo,
      &ex3p_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ex3p_M->solverInfo,
      &ex3p_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ex3p_M->solverInfo,
      &ex3p_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ex3p_M->solverInfo, (&rtmGetErrorStatus(ex3p_M)));
    rtsiSetRTModelPtr(&ex3p_M->solverInfo, ex3p_M);
  }

  rtsiSetSimTimeStep(&ex3p_M->solverInfo, MAJOR_TIME_STEP);
  ex3p_M->intgData.y = ex3p_M->odeY;
  ex3p_M->intgData.f[0] = ex3p_M->odeF[0];
  ex3p_M->intgData.f[1] = ex3p_M->odeF[1];
  ex3p_M->intgData.f[2] = ex3p_M->odeF[2];
  ex3p_M->contStates = ((X_ex3p_T *) &ex3p_X);
  rtsiSetSolverData(&ex3p_M->solverInfo, (void *)&ex3p_M->intgData);
  rtsiSetSolverName(&ex3p_M->solverInfo,"ode3");
  rtmSetTPtr(ex3p_M, &ex3p_M->Timing.tArray[0]);
  ex3p_M->Timing.stepSize0 = 0.008;

  {
    int32_T i;

    /* SetupRuntimeResources for Scope: '<Root>/Scope1' */
    {
      const char* mobileScopeProperties1 =
        "{\"axesColor\":[1,1,1],\"axesScaling\":\"manual\",\"axesTickColor\":[0.5019607843137255,0.5019607843137255,0.5019607843137255],\"blockType\":\"Scope\",\"displays\":[{\"lineColors\":[[0.7490196078431373,0,0.7490196078431373],[0.850980392156863,0.325490196078431,0.0980392156862745],[0,0.4980392156862745,0],[0.49411764705882355,0.1843137254901961,0.5568627450980392],[0.4666666666666667,0.6745098039215687,0.18823529411764706],[0.30196078431372547,0.7450980392156863,0.9333333333333333],[0.6352941176470588,0.0784313725490196,0.1843137254901961]],\"lineStyles\":[\"-\",\"-\",\"-\",\"-\",\"-\",\"-\",\"-\"],\"lineWidths\":[1.2,0.75,0.75,0.75,0.75,0.75,0.75],\"showGrid\":true,\"showLegend\":false,\"yLimits\":[-17.20285,251.3692]}],\"frameBasedProcessing\":false,\"inputNames\":[\"Gain2\"],\"layoutDimensions\":[1,1],\"timeSpan\":745.2110626819486,\"timeSpanOverrunMode\":\"Wrap\"}";
      int_T numInputPortsScope1 = 1;
      int_T scope1ID = 1;
      real32_T sampleTimes1[1] = { 0.008 };

      INITIALIZE_PLOT(scope1ID,numInputPortsScope1,mobileScopeProperties1,
                      sampleTimes1);
    }

    /* End of Scope: '<Root>/Scope1' */

    /* InitializeConditions for Integrator: '<Root>/Integrator' */
    ex3p_X.Integrator_CSTATE = ex3p_P.Integrator_IC;

    /* InitializeConditions for Integrator: '<Root>/Integrator1' */
    ex3p_X.Integrator1_CSTATE = ex3p_P.Integrator1_IC;

    /* InitializeConditions for Integrator: '<Root>/Integrator2' */
    ex3p_X.Integrator2_CSTATE = ex3p_P.Integrator2_IC;

    /* InitializeConditions for Memory: '<S3>/Memory' */
    ex3p_DW.Memory_PreviousInput = ex3p_P.offsetMaxFinder;

    /* InitializeConditions for Delay: '<Root>/Delay' */
    for (i = 0; i < 25; i++) {
      ex3p_DW.Delay_DSTATE[i] = ex3p_P.Delay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<Root>/Delay' */

    /* InitializeConditions for S-Function (sdspcount2): '<Root>/Counter' */
    ex3p_DW.Counter_Count = ex3p_P.Counter_InitialCount;

    /* Start for MATLABSystem: '<S2>/DataDisplay' */
    INITIALIZE_DATADISPLAY();
  }
}

/* Model terminate function */
void ex3p_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
