/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: art_prs.h
 *
 * Code generated for Simulink model 'art_prs'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Oct 16 17:12:40 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_art_prs_h_
#define RTW_HEADER_art_prs_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef art_prs_COMMON_INCLUDES_
# define art_prs_COMMON_INCLUDES_
#include "driver_android_plot.h"
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_android_datadisplay.h"
#endif                                 /* art_prs_COMMON_INCLUDES_ */

#include "art_prs_types.h"
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
  real_T PulseGenerator1;              /* '<Root>/Pulse Generator1' */
  real_T Arteria;                      /* '<Root>/Arteria' */
  real_T Memory;                       /* '<S9>/Memory' */
  real_T Reset;                        /* '<S9>/Reset' */
  real_T Memory_f;                     /* '<S10>/Memory' */
  real_T Reset_h;                      /* '<S10>/Reset' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Sum9;                         /* '<Root>/Sum9' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Gain1;                        /* '<Root>/Gain1' */
} B_art_prs_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S9>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S10>/Memory' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator1' */
} DW_art_prs_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Arteria_CSTATE;               /* '<Root>/Arteria' */
  real_T Salidadeventr_CSTATE;         /* '<Root>/Salida de ventr' */
  real_T Volume_CSTATE;                /* '<Root>/Volume' */
  real_T Vena_CSTATE;                  /* '<Root>/Vena' */
} X_art_prs_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Arteria_CSTATE;               /* '<Root>/Arteria' */
  real_T Salidadeventr_CSTATE;         /* '<Root>/Salida de ventr' */
  real_T Volume_CSTATE;                /* '<Root>/Volume' */
  real_T Vena_CSTATE;                  /* '<Root>/Vena' */
} XDot_art_prs_T;

/* State disabled  */
typedef struct {
  boolean_T Arteria_CSTATE;            /* '<Root>/Arteria' */
  boolean_T Salidadeventr_CSTATE;      /* '<Root>/Salida de ventr' */
  boolean_T Volume_CSTATE;             /* '<Root>/Volume' */
  boolean_T Vena_CSTATE;               /* '<Root>/Vena' */
} XDis_art_prs_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_art_prs_T_ {
  real_T A1;                           /* Variable: A1
                                        * Referenced by: '<S8>/Gain2'
                                        */
  real_T Ca;                           /* Variable: Ca
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Ce;                           /* Variable: Ce
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Cv;                           /* Variable: Cv
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Ed;                           /* Variable: Ed
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Es0;                          /* Variable: Es0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Ra;                           /* Variable: Ra
                                        * Referenced by:
                                        *   '<Root>/Constant'
                                        *   '<Root>/Constant2'
                                        */
  real_T Re0;                          /* Variable: Re0
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Rlv;                          /* Variable: Rlv
                                        * Referenced by:
                                        *   '<Root>/Constant3'
                                        *   '<Root>/Constant6'
                                        */
  real_T Rv;                           /* Variable: Rv
                                        * Referenced by:
                                        *   '<Root>/Constant1'
                                        *   '<Root>/Constant4'
                                        */
  real_T c1;                           /* Variable: c1
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T c2;                           /* Variable: c2
                                        * Referenced by:
                                        *   '<S5>/Gain'
                                        *   '<S6>/Gain'
                                        */
  real_T c3;                           /* Variable: c3
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T epsilon;                      /* Variable: epsilon
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T omega0;                       /* Variable: omega0
                                        * Referenced by:
                                        *   '<S5>/Constant'
                                        *   '<S5>/Gain'
                                        *   '<S6>/Gain'
                                        */
  real_T RepeatingSequence_rep_seq_y[4];
                                  /* Mask Parameter: RepeatingSequence_rep_seq_y
                                   * Referenced by: '<S11>/Look-Up Table1'
                                   */
  real_T MinMaxRunningResettable1_vinit;
                               /* Mask Parameter: MinMaxRunningResettable1_vinit
                                * Referenced by:
                                *   '<S9>/Initial Condition'
                                *   '<S9>/Memory'
                                */
  real_T MinMaxRunningResettable2_vinit;
                               /* Mask Parameter: MinMaxRunningResettable2_vinit
                                * Referenced by:
                                *   '<S10>/Initial Condition'
                                *   '<S10>/Memory'
                                */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<Root>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<Root>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T Arteria_IC;                   /* Expression: 70
                                        * Referenced by: '<Root>/Arteria'
                                        */
  real_T Constant7_Value;              /* Expression: 54
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Salidadeventr_IC;             /* Expression: 49.896
                                        * Referenced by: '<Root>/Salida de ventr'
                                        */
  real_T Volume_IC;                    /* Expression: 49.714/0.0655
                                        * Referenced by: '<Root>/Volume'
                                        */
  real_T Gain2_Gain;                   /* Expression: 3/2
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T Constant_Value;               /* Expression: period
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[4];     /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S11>/Look-Up Table1'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Vena_IC;                      /* Expression: 16.628
                                        * Referenced by: '<Root>/Vena'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_art_prs_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_art_prs_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[4];
  real_T odeF[3][4];
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
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_art_prs_T art_prs_P;

/* Block signals (default storage) */
extern B_art_prs_T art_prs_B;

/* Continuous states (default storage) */
extern X_art_prs_T art_prs_X;

/* Block states (default storage) */
extern DW_art_prs_T art_prs_DW;

/* Model entry point functions */
extern void art_prs_initialize(void);
extern void art_prs_step(void);
extern void art_prs_terminate(void);

/* Real-time Model object */
extern RT_MODEL_art_prs_T *const art_prs_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S4>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S11>/Output' : Eliminate redundant signal conversion block
 */

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
 * '<Root>' : 'art_prs'
 * '<S1>'   : 'art_prs/Data Display'
 * '<S2>'   : 'art_prs/Data Display1'
 * '<S3>'   : 'art_prs/MinMax Running Resettable1'
 * '<S4>'   : 'art_prs/MinMax Running Resettable2'
 * '<S5>'   : 'art_prs/Subsystem'
 * '<S6>'   : 'art_prs/Subsystem1'
 * '<S7>'   : 'art_prs/Subsystem2'
 * '<S8>'   : 'art_prs/Subsystem3'
 * '<S9>'   : 'art_prs/MinMax Running Resettable1/Subsystem'
 * '<S10>'  : 'art_prs/MinMax Running Resettable2/Subsystem'
 * '<S11>'  : 'art_prs/Subsystem/Repeating Sequence'
 */
#endif                                 /* RTW_HEADER_art_prs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
