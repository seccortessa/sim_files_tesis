LOCAL_PATH := ..
include $(CLEAR_VARS)
LOCAL_MODULE := ex3p
LOCAL_CFLAGS += -DMODEL=ex3p -DNUMST=2 -DNCSTATES=3 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT -DPORTABLE_WORDSIZES 
LOCAL_SRC_FILES := ert_main.c ex3p.c ex3p_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c androidinitialize.c driver_android_datadisplay.c driver_android_plot.c 
LOCAL_C_INCLUDES += C:/Users/luisi/DOCUME~1/UNIVER~1/Tesis/MODELO~1/SIM_FI~1 C:/PROGRA~3/MATLAB/SUPPOR~1/R2020a/toolbox/target/SUPPOR~1/android/include C:/Users/luisi/DOCUME~1/UNIVER~1/Tesis/MODELO~1/SIM_FI~1/EX3P_E~1 C:/PROGRA~1/MATLAB/R2020a/extern/include C:/PROGRA~1/MATLAB/R2020a/simulink/include C:/PROGRA~1/MATLAB/R2020a/rtw/c/src C:/PROGRA~1/MATLAB/R2020a/rtw/c/src/ext_mode/common C:/PROGRA~1/MATLAB/R2020a/rtw/c/ert C:/PROGRA~1/MATLAB/R2020a/toolbox/dsp/include C:/PROGRA~1/MATLAB/R2020a/toolbox/dsp/extern/src/export/include/src C:/PROGRA~1/MATLAB/R2020a/toolbox/dsp/extern/src/export/include C:/PROGRA~1/MATLAB/R2020a/toolbox/shared/dsp/vision/matlab/include C:\PROGRA~3\MATLAB\SUPPOR~1\R2020a\toolbox\target\SUPPOR~1\android\include 
LOCAL_LDLIBS  +=  -llog -ldl
include $(BUILD_SHARED_LIBRARY)
