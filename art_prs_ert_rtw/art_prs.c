/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: art_prs.c
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

#include "art_prs.h"
#include "art_prs_private.h"

/* Block signals (default storage) */
B_art_prs_T art_prs_B;

/* Continuous states */
X_art_prs_T art_prs_X;

/* Block states (default storage) */
DW_art_prs_T art_prs_DW;

/* Real-time model */
RT_MODEL_art_prs_T art_prs_M_;
RT_MODEL_art_prs_T *const art_prs_M = &art_prs_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

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
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  art_prs_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  art_prs_step();
  art_prs_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  art_prs_step();
  art_prs_derivatives();

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

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void art_prs_step(void)
{
  real_T rtb_Sum16;
  real_T rtb_Sin1;
  char_T tmp[5];
  real_T Gain_tmp;
  if (rtmIsMajorTimeStep(art_prs_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&art_prs_M->solverInfo,((art_prs_M->Timing.clockTick0+
      1)*art_prs_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(art_prs_M)) {
    art_prs_M->Timing.t[0] = rtsiGetT(&art_prs_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(art_prs_M)) {
    /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
    art_prs_B.PulseGenerator1 = (art_prs_DW.clockTickCounter <
      art_prs_P.PulseGenerator1_Duty) && (art_prs_DW.clockTickCounter >= 0) ?
      art_prs_P.PulseGenerator1_Amp : 0.0;
    if (art_prs_DW.clockTickCounter >= art_prs_P.PulseGenerator1_Period - 1.0) {
      art_prs_DW.clockTickCounter = 0;
    } else {
      art_prs_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

    /* Memory: '<S9>/Memory' */
    art_prs_B.Memory = art_prs_DW.Memory_PreviousInput;
  }

  /* Integrator: '<Root>/Arteria' */
  art_prs_B.Arteria = art_prs_X.Arteria_CSTATE;

  /* Switch: '<S9>/Reset' incorporates:
   *  Constant: '<S9>/Initial Condition'
   *  MinMax: '<S3>/MinMax'
   */
  if (art_prs_B.PulseGenerator1 != 0.0) {
    art_prs_B.Reset = art_prs_P.MinMaxRunningResettable1_vinit;
  } else if ((art_prs_B.Arteria > art_prs_B.Memory) || rtIsNaN(art_prs_B.Memory))
  {
    /* MinMax: '<S3>/MinMax' */
    art_prs_B.Reset = art_prs_B.Arteria;
  } else {
    /* MinMax: '<S3>/MinMax' */
    art_prs_B.Reset = art_prs_B.Memory;
  }

  /* End of Switch: '<S9>/Reset' */

  /* MATLABSystem: '<S1>/DataDisplay' */
  tmp[0] = '%';
  tmp[1] = '.';
  tmp[2] = '6';
  tmp[3] = 'f';
  tmp[4] = '\x00';
  PUT_DATADISPLAY_DATA(&art_prs_B.Reset, 1.0, 9, 1, tmp);
  if (rtmIsMajorTimeStep(art_prs_M)) {
    /* Memory: '<S10>/Memory' */
    art_prs_B.Memory_f = art_prs_DW.Memory_PreviousInput_g;
  }

  /* Switch: '<S10>/Reset' */
  if (art_prs_B.PulseGenerator1 != 0.0) {
    /* Sum: '<Root>/Sum15' incorporates:
     *  Constant: '<S10>/Initial Condition'
     */
    art_prs_B.Reset_h = art_prs_P.MinMaxRunningResettable2_vinit;
  } else {
    /* Sum: '<Root>/Sum15' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    art_prs_B.Reset_h = art_prs_B.Arteria - art_prs_P.Constant7_Value;

    /* MinMax: '<S4>/MinMax' */
    if ((!(art_prs_B.Reset_h < art_prs_B.Memory_f)) && (!rtIsNaN
         (art_prs_B.Memory_f))) {
      /* Sum: '<Root>/Sum15' */
      art_prs_B.Reset_h = art_prs_B.Memory_f;
    }

    /* End of MinMax: '<S4>/MinMax' */
  }

  /* End of Switch: '<S10>/Reset' */

  /* Sum: '<Root>/Sum16' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  rtb_Sum16 = art_prs_B.Reset_h + art_prs_P.Constant7_Value;

  /* MATLABSystem: '<S2>/DataDisplay' */
  tmp[0] = '%';
  tmp[1] = '.';
  tmp[2] = '6';
  tmp[3] = 'f';
  tmp[4] = '\x00';
  PUT_DATADISPLAY_DATA(&rtb_Sum16, 2.0, 9, 1, tmp);
  if (rtmIsMajorTimeStep(art_prs_M)) {
    /* Scope: '<Root>/Scope2' */
    /* Call plotting routine for a mobile target */
    {
      int_T scope1ID = 1;

      {
        int_T portIdx = 0;
        int_T signalWidth = 1;
        int_T sigNumDims = 1;
        int_T sigDims[1] = { 1 };

        real32_T up0[1];
        up0[0] = (real32_T)art_prs_B.Arteria;
        CACHE_PLOT_DATA(scope1ID,portIdx,up0,signalWidth,sigNumDims,sigDims);
      }

      PLOT_DATA(scope1ID);
    }

    /* End of Scope: '<Root>/Scope2' */
  }

  /* Clock: '<S5>/Clock' incorporates:
   *  Clock: '<S11>/Clock'
   */
  rtb_Sum16 = art_prs_M->Timing.t[0];

  /* Trigonometry: '<S5>/Sin1' incorporates:
   *  Clock: '<S5>/Clock'
   *  Constant: '<S5>/Constant'
   *  Gain: '<S5>/Gain'
   *  Gain: '<S5>/Gain1'
   *  Gain: '<S5>/Gain2'
   *  Product: '<S5>/Product'
   *  Sum: '<S5>/Sum'
   *  Trigonometry: '<S5>/Sin'
   */
  rtb_Sin1 = sin((sin(art_prs_P.omega0 / art_prs_P.c2 * rtb_Sum16) *
                  art_prs_P.c3 + art_prs_P.omega0) * art_prs_P.Gain2_Gain *
                 rtb_Sum16);

  /* Product: '<Root>/Ventricular' incorporates:
   *  Clock: '<S6>/Clock'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Gain: '<S6>/Gain'
   *  Gain: '<S6>/Gain1'
   *  Integrator: '<Root>/Volume'
   *  Lookup_n-D: '<S11>/Look-Up Table1'
   *  Math: '<S11>/Math Function'
   *  Product: '<S5>/Product1'
   *  Product: '<S7>/Product'
   *  S-Function (sfun_tstart): '<S11>/startTime'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S6>/Sum'
   *  Sum: '<S7>/Sum'
   *  Sum: '<S7>/Sum1'
   *  Trigonometry: '<S6>/Sin'
   */
  rtb_Sin1 = (((sin(art_prs_P.omega0 / art_prs_P.c2 * art_prs_M->Timing.t[0]) *
                art_prs_P.c1 + art_prs_P.Es0) - art_prs_P.Ed) * (rtb_Sin1 *
    rtb_Sin1 * look1_binlxpw(rt_remd_snf(rtb_Sum16 - (0.0),
    art_prs_P.Constant_Value), art_prs_P.LookUpTable1_bp01Data,
    art_prs_P.RepeatingSequence_rep_seq_y, 3U)) + art_prs_P.Ed) *
    art_prs_X.Volume_CSTATE;

  /* Sum: '<S8>/Sum1' incorporates:
   *  Integrator: '<Root>/Salida de ventr'
   *  Sum: '<Root>/Sum1'
   */
  rtb_Sum16 = rtb_Sin1 - art_prs_X.Salidadeventr_CSTATE;

  /* Product: '<Root>/Divide' incorporates:
   *  Constant: '<S8>/Constant'
   *  Gain: '<S8>/Gain'
   *  Gain: '<S8>/Gain1'
   *  Gain: '<S8>/Gain2'
   *  Math: '<S8>/Exp'
   *  Product: '<Root>/Divide7'
   *  Sum: '<S8>/Sum'
   *  Sum: '<S8>/Sum1'
   *
   * About '<S8>/Exp':
   *  Operator: exp
   */
  Gain_tmp = rtb_Sum16 / ((exp(rtb_Sum16 * -art_prs_P.A1) * art_prs_P.epsilon +
    art_prs_P.Constant_Value_b) * art_prs_P.Re0);

  /* Product: '<Root>/Divide1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Integrator: '<Root>/Salida de ventr'
   *  Product: '<Root>/Divide2'
   *  Sum: '<Root>/Sum2'
   */
  rtb_Sum16 = (art_prs_X.Salidadeventr_CSTATE - art_prs_B.Arteria) /
    art_prs_P.Ra;

  /* Gain: '<Root>/Gain' incorporates:
   *  Product: '<Root>/Divide'
   *  Product: '<Root>/Divide1'
   *  Sum: '<Root>/Sum'
   */
  art_prs_B.Gain = (Gain_tmp - rtb_Sum16) * (1.0 / art_prs_P.Ce);

  /* Product: '<Root>/Divide6' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Integrator: '<Root>/Vena'
   *  Product: '<Root>/Divide5'
   *  Sum: '<Root>/Sum10'
   */
  rtb_Sin1 = (art_prs_X.Vena_CSTATE - rtb_Sin1) / art_prs_P.Rlv;

  /* Sum: '<Root>/Sum9' incorporates:
   *  Product: '<Root>/Divide6'
   */
  art_prs_B.Sum9 = rtb_Sin1 - Gain_tmp;

  /* Product: '<Root>/Divide3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Integrator: '<Root>/Vena'
   *  Product: '<Root>/Divide4'
   *  Sum: '<Root>/Sum5'
   */
  Gain_tmp = (art_prs_B.Arteria - art_prs_X.Vena_CSTATE) / art_prs_P.Rv;

  /* Gain: '<Root>/Gain2' incorporates:
   *  Product: '<Root>/Divide3'
   *  Sum: '<Root>/Sum3'
   */
  art_prs_B.Gain2 = (rtb_Sum16 - Gain_tmp) * (1.0 / art_prs_P.Ca);

  /* Gain: '<Root>/Gain1' incorporates:
   *  Sum: '<Root>/Sum6'
   */
  art_prs_B.Gain1 = (Gain_tmp - rtb_Sin1) * (1.0 / art_prs_P.Cv);
  if (rtmIsMajorTimeStep(art_prs_M)) {
    if (rtmIsMajorTimeStep(art_prs_M)) {
      /* Update for Memory: '<S9>/Memory' */
      art_prs_DW.Memory_PreviousInput = art_prs_B.Reset;

      /* Update for Memory: '<S10>/Memory' */
      art_prs_DW.Memory_PreviousInput_g = art_prs_B.Reset_h;
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(art_prs_M)) {
    rt_ertODEUpdateContinuousStates(&art_prs_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++art_prs_M->Timing.clockTick0;
    art_prs_M->Timing.t[0] = rtsiGetSolverStopTime(&art_prs_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      art_prs_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void art_prs_derivatives(void)
{
  XDot_art_prs_T *_rtXdot;
  _rtXdot = ((XDot_art_prs_T *) art_prs_M->derivs);

  /* Derivatives for Integrator: '<Root>/Arteria' */
  _rtXdot->Arteria_CSTATE = art_prs_B.Gain2;

  /* Derivatives for Integrator: '<Root>/Salida de ventr' */
  _rtXdot->Salidadeventr_CSTATE = art_prs_B.Gain;

  /* Derivatives for Integrator: '<Root>/Volume' */
  _rtXdot->Volume_CSTATE = art_prs_B.Sum9;

  /* Derivatives for Integrator: '<Root>/Vena' */
  _rtXdot->Vena_CSTATE = art_prs_B.Gain1;
}

/* Model initialize function */
void art_prs_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&art_prs_M->solverInfo, &art_prs_M->Timing.simTimeStep);
    rtsiSetTPtr(&art_prs_M->solverInfo, &rtmGetTPtr(art_prs_M));
    rtsiSetStepSizePtr(&art_prs_M->solverInfo, &art_prs_M->Timing.stepSize0);
    rtsiSetdXPtr(&art_prs_M->solverInfo, &art_prs_M->derivs);
    rtsiSetContStatesPtr(&art_prs_M->solverInfo, (real_T **)
                         &art_prs_M->contStates);
    rtsiSetNumContStatesPtr(&art_prs_M->solverInfo,
      &art_prs_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&art_prs_M->solverInfo,
      &art_prs_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&art_prs_M->solverInfo,
      &art_prs_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&art_prs_M->solverInfo,
      &art_prs_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&art_prs_M->solverInfo, (&rtmGetErrorStatus(art_prs_M)));
    rtsiSetRTModelPtr(&art_prs_M->solverInfo, art_prs_M);
  }

  rtsiSetSimTimeStep(&art_prs_M->solverInfo, MAJOR_TIME_STEP);
  art_prs_M->intgData.y = art_prs_M->odeY;
  art_prs_M->intgData.f[0] = art_prs_M->odeF[0];
  art_prs_M->intgData.f[1] = art_prs_M->odeF[1];
  art_prs_M->intgData.f[2] = art_prs_M->odeF[2];
  art_prs_M->contStates = ((X_art_prs_T *) &art_prs_X);
  rtsiSetSolverData(&art_prs_M->solverInfo, (void *)&art_prs_M->intgData);
  rtsiSetSolverName(&art_prs_M->solverInfo,"ode3");
  rtmSetTPtr(art_prs_M, &art_prs_M->Timing.tArray[0]);
  art_prs_M->Timing.stepSize0 = 0.01;

  /* SetupRuntimeResources for Scope: '<Root>/Scope2' */
  {
    const char* mobileScopeProperties1 =
      "{\"axesColor\":[0,0,0],\"axesScaling\":\"manual\",\"axesTickColor\":[0.686274509803922,0.686274509803922,0.686274509803922],\"blockType\":\"Scope\",\"displays\":[{\"lineColors\":[[1,1,0.06666666666666667],[0.07450980392156863,0.6235294117647059,1],[1,0.4117647058823529,0.1607843137254902],[0.39215686274509803,0.8313725490196079,0.07450980392156863],[0.7176470588235294,0.27450980392156865,1],[0.058823529411764705,1,1],[1,0.07450980392156863,0.6509803921568628]],\"lineStyles\":[\"-\",\"-\",\"-\",\"-\",\"-\",\"-\",\"-\"],\"lineWidths\":[0.75,0.75,0.75,0.75,0.75,0.75,0.75],\"showGrid\":true,\"showLegend\":false,\"yLimits\":[27.98456,84.37466]}],\"frameBasedProcessing\":false,\"inputNames\":[\"Arteria\"],\"layoutDimensions\":[1,1],\"timeSpan\":10.200000000000045,\"timeSpanOverrunMode\":\"Wrap\"}";
    int_T numInputPortsScope1 = 1;
    int_T scope1ID = 1;
    real32_T sampleTimes1[1] = { 0.01 };

    INITIALIZE_PLOT(scope1ID,numInputPortsScope1,mobileScopeProperties1,
                    sampleTimes1);
  }

  /* End of Scope: '<Root>/Scope2' */

  /* InitializeConditions for Integrator: '<Root>/Arteria' */
  art_prs_X.Arteria_CSTATE = art_prs_P.Arteria_IC;

  /* InitializeConditions for Memory: '<S9>/Memory' */
  art_prs_DW.Memory_PreviousInput = art_prs_P.MinMaxRunningResettable1_vinit;

  /* InitializeConditions for Memory: '<S10>/Memory' */
  art_prs_DW.Memory_PreviousInput_g = art_prs_P.MinMaxRunningResettable2_vinit;

  /* InitializeConditions for Integrator: '<Root>/Salida de ventr' */
  art_prs_X.Salidadeventr_CSTATE = art_prs_P.Salidadeventr_IC;

  /* InitializeConditions for Integrator: '<Root>/Volume' */
  art_prs_X.Volume_CSTATE = art_prs_P.Volume_IC;

  /* InitializeConditions for Integrator: '<Root>/Vena' */
  art_prs_X.Vena_CSTATE = art_prs_P.Vena_IC;

  /* Start for MATLABSystem: '<S1>/DataDisplay' */
  INITIALIZE_DATADISPLAY();

  /* Start for MATLABSystem: '<S2>/DataDisplay' */
  INITIALIZE_DATADISPLAY();
}

/* Model terminate function */
void art_prs_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
