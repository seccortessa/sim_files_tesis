/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ex3p.h
 *
 * Code generated for Simulink model 'ex3p'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Oct 18 11:09:26 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex3p_h_
#define RTW_HEADER_ex3p_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ex3p_COMMON_INCLUDES_
# define ex3p_COMMON_INCLUDES_
#include "driver_android_plot.h"
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_android_button.h"
#include "driver_android_datadisplay.h"
#endif                                 /* ex3p_COMMON_INCLUDES_ */

#include "ex3p_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T z;                            /* '<Root>/Sum15' */
  real_T y;                            /* '<Root>/Sum1' */
  real_T x;                            /* '<Root>/Sum' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Counter;                      /* '<Root>/Counter' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  boolean_T Button;                    /* '<S1>/Button' */
} B_ex3p_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T Counter_ClkEphState;        /* '<Root>/Counter' */
  uint32_T Counter_RstEphState;        /* '<Root>/Counter' */
  uint16_T Counter_Count;              /* '<Root>/Counter' */
} DW_ex3p_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
} X_ex3p_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
} XDot_ex3p_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<Root>/Integrator1' */
  boolean_T Integrator2_CSTATE;        /* '<Root>/Integrator2' */
} XDis_ex3p_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_ex3p_T_ {
  uint16_T Counter_InitialCount;       /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<Root>/Counter'
                                        */
  real_T Integrator_IC;                /* Expression: 1000
                                        * Referenced by: '<Root>/Integrator'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.15e-3
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: pi/2
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Constant4_Value;              /* Expression: 0.6
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<Root>/Integrator1'
                                        */
  real_T Integrator2_IC;               /* Expression: 2
                                        * Referenced by: '<Root>/Integrator2'
                                        */
  real_T Constant1_Value;              /* Expression: pi/2
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant5_Value;              /* Expression: 0.05
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant6_Value;              /* Expression: -5
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant2_Value;              /* Expression: pi/12
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant7_Value;              /* Expression: 0.02
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant8_Value;              /* Expression: 15
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 0.02
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Gain9_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain9'
                                        */
  real_T Constant10_Value;             /* Expression: -7.5
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant16_Value;             /* Expression: pi/12
                                        * Referenced by: '<Root>/Constant16'
                                        */
  real_T Constant11_Value;             /* Expression: 0.02
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T Gain10_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain10'
                                        */
  real_T Constant12_Value;             /* Expression: 0.75*0.5
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant3_Value;              /* Expression: 4*pi/6
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant13_Value;             /* Expression: 0.25
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Gain11_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain11'
                                        */
  real_T Gain8_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain8'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant15_Value;             /* Expression: 8
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.7
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Constant14_Value;             /* Expression: 0.01
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Constant17_Value;             /* Expression: 60
                                        * Referenced by: '<Root>/Constant17'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ex3p_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_ex3p_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[3][3];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_ex3p_T ex3p_P;

/* Block signals (default storage) */
extern B_ex3p_T ex3p_B;

/* Continuous states (default storage) */
extern X_ex3p_T ex3p_X;

/* Block states (default storage) */
extern DW_ex3p_T ex3p_DW;

/* Model entry point functions */
extern void ex3p_initialize(void);
extern void ex3p_step(void);
extern void ex3p_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex3p_T *const ex3p_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ex3p'
 * '<S1>'   : 'ex3p/Button'
 * '<S2>'   : 'ex3p/buton'
 * '<S3>'   : 'ex3p/frecuencia'
 * '<S4>'   : 'ex3p/salida count1'
 * '<S5>'   : 'ex3p/tiempo'
 */
#endif                                 /* RTW_HEADER_ex3p_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
