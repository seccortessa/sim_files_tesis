/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: model2p.c
 *
 * Code generated for Simulink model 'model2p'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Oct 15 18:15:32 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "model2p.h"
#include "model2p_private.h"

/* Block signals (default storage) */
B_model2p_T model2p_B;

/* Continuous states */
X_model2p_T model2p_X;

/* Real-time model */
RT_MODEL_model2p_T model2p_M_;
RT_MODEL_model2p_T *const model2p_M = &model2p_M_;

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  model2p_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  model2p_step();
  model2p_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  model2p_step();
  model2p_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  model2p_step();
  model2p_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void model2p_step(void)
{
  real_T rtb_Clock;
  real_T rtb_Product3;
  char_T tmp[5];
  if (rtmIsMajorTimeStep(model2p_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&model2p_M->solverInfo,((model2p_M->Timing.clockTick0+
      1)*model2p_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(model2p_M)) {
    model2p_M->Timing.t[0] = rtsiGetT(&model2p_M->solverInfo);
  }

  /* Clock: '<Root>/Clock' */
  rtb_Clock = model2p_M->Timing.t[0];

  /* MATLABSystem: '<S1>/DataDisplay' */
  tmp[0] = '%';
  tmp[1] = '.';
  tmp[2] = '6';
  tmp[3] = 'f';
  tmp[4] = '\x00';
  PUT_DATADISPLAY_DATA(&rtb_Clock, 1.0, 9, 1, tmp);

  /* Sum: '<Root>/Sum6' incorporates:
   *  Gain: '<Root>/Gain10'
   *  Gain: '<Root>/Gain11'
   *  Gain: '<Root>/Gain8'
   *  Gain: '<Root>/Gain9'
   *  Integrator: '<Root>/Integrator'
   *  Integrator: '<Root>/Integrator1'
   *  Integrator: '<Root>/Integrator2'
   *  Integrator: '<Root>/Integrator3'
   */
  model2p_B.Sum6 = ((model2p_P.a1 * model2p_X.Integrator_CSTATE + model2p_P.a2 *
                     model2p_X.Integrator1_CSTATE) + model2p_P.a3 *
                    model2p_X.Integrator2_CSTATE) + model2p_P.a4 *
    model2p_X.Integrator3_CSTATE;
  if (rtmIsMajorTimeStep(model2p_M)) {
    /* Scope: '<Root>/Scope' */
    /* Call plotting routine for a mobile target */
    {
      int_T scope1ID = 1;

      {
        int_T portIdx = 0;
        int_T signalWidth = 1;
        int_T sigNumDims = 1;
        int_T sigDims[1] = { 1 };

        real32_T up0[1];
        up0[0] = (real32_T)model2p_B.Sum6;
        CACHE_PLOT_DATA(scope1ID,portIdx,up0,signalWidth,sigNumDims,sigDims);
      }

      PLOT_DATA(scope1ID);
    }

    /* End of Scope: '<Root>/Scope' */
  }

  /* Product: '<Root>/Product' incorporates:
   *  Integrator: '<Root>/Integrator'
   *  Integrator: '<Root>/Integrator1'
   */
  rtb_Clock = model2p_X.Integrator1_CSTATE * model2p_X.Integrator_CSTATE;

  /* Gain: '<Root>/Gain' */
  rtb_Product3 = model2p_P.C * rtb_Clock;

  /* Product: '<Root>/Product1' incorporates:
   *  Integrator: '<Root>/Integrator1'
   */
  rtb_Clock *= model2p_X.Integrator1_CSTATE;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   *  Gain: '<Root>/Gain3'
   *  Integrator: '<Root>/Integrator'
   *  Integrator: '<Root>/Integrator1'
   *  Integrator: '<Root>/Integrator3'
   *  Sum: '<Root>/Sum2'
   */
  model2p_B.Sum1 = (((model2p_P.H * model2p_X.Integrator_CSTATE -
                      model2p_P.Gain2_Gain * model2p_X.Integrator1_CSTATE) +
                     rtb_Product3) + rtb_Clock) + (model2p_X.Integrator3_CSTATE
    - model2p_X.Integrator1_CSTATE) * model2p_P.b;

  /* Sum: '<Root>/Sum' incorporates:
   *  Integrator: '<Root>/Integrator'
   *  Integrator: '<Root>/Integrator1'
   */
  model2p_B.Sum = ((model2p_X.Integrator_CSTATE - model2p_X.Integrator1_CSTATE)
                   - rtb_Product3) - rtb_Clock;

  /* Product: '<Root>/Product2' incorporates:
   *  Integrator: '<Root>/Integrator2'
   *  Integrator: '<Root>/Integrator3'
   */
  rtb_Product3 = model2p_X.Integrator2_CSTATE * model2p_X.Integrator3_CSTATE;

  /* Gain: '<Root>/Gain4' */
  rtb_Clock = model2p_P.C * rtb_Product3;

  /* Product: '<Root>/Product3' incorporates:
   *  Integrator: '<Root>/Integrator3'
   */
  rtb_Product3 *= model2p_X.Integrator3_CSTATE;

  /* Sum: '<Root>/Sum4' incorporates:
   *  Gain: '<Root>/Gain5'
   *  Gain: '<Root>/Gain6'
   *  Gain: '<Root>/Gain7'
   *  Integrator: '<Root>/Integrator1'
   *  Integrator: '<Root>/Integrator2'
   *  Integrator: '<Root>/Integrator3'
   *  Sum: '<Root>/Sum5'
   */
  model2p_B.Sum4 = (((model2p_P.H * model2p_X.Integrator2_CSTATE -
                      model2p_P.Gain6_Gain * model2p_X.Integrator3_CSTATE) +
                     rtb_Clock) + rtb_Product3) + 2.0 * model2p_P.b *
    (model2p_X.Integrator1_CSTATE - model2p_X.Integrator3_CSTATE);

  /* Sum: '<Root>/Sum3' incorporates:
   *  Integrator: '<Root>/Integrator2'
   *  Integrator: '<Root>/Integrator3'
   */
  model2p_B.Sum3 = ((model2p_X.Integrator2_CSTATE - model2p_X.Integrator3_CSTATE)
                    - rtb_Clock) - rtb_Product3;
  if (rtmIsMajorTimeStep(model2p_M)) {
    rt_ertODEUpdateContinuousStates(&model2p_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++model2p_M->Timing.clockTick0;
    model2p_M->Timing.t[0] = rtsiGetSolverStopTime(&model2p_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      model2p_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void model2p_derivatives(void)
{
  XDot_model2p_T *_rtXdot;
  _rtXdot = ((XDot_model2p_T *) model2p_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = model2p_B.Sum;

  /* Derivatives for Integrator: '<Root>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = model2p_B.Sum1;

  /* Derivatives for Integrator: '<Root>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = model2p_B.Sum3;

  /* Derivatives for Integrator: '<Root>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = model2p_B.Sum4;
}

/* Model initialize function */
void model2p_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&model2p_M->solverInfo, &model2p_M->Timing.simTimeStep);
    rtsiSetTPtr(&model2p_M->solverInfo, &rtmGetTPtr(model2p_M));
    rtsiSetStepSizePtr(&model2p_M->solverInfo, &model2p_M->Timing.stepSize0);
    rtsiSetdXPtr(&model2p_M->solverInfo, &model2p_M->derivs);
    rtsiSetContStatesPtr(&model2p_M->solverInfo, (real_T **)
                         &model2p_M->contStates);
    rtsiSetNumContStatesPtr(&model2p_M->solverInfo,
      &model2p_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&model2p_M->solverInfo,
      &model2p_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&model2p_M->solverInfo,
      &model2p_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&model2p_M->solverInfo,
      &model2p_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&model2p_M->solverInfo, (&rtmGetErrorStatus(model2p_M)));
    rtsiSetRTModelPtr(&model2p_M->solverInfo, model2p_M);
  }

  rtsiSetSimTimeStep(&model2p_M->solverInfo, MAJOR_TIME_STEP);
  model2p_M->intgData.y = model2p_M->odeY;
  model2p_M->intgData.f[0] = model2p_M->odeF[0];
  model2p_M->intgData.f[1] = model2p_M->odeF[1];
  model2p_M->intgData.f[2] = model2p_M->odeF[2];
  model2p_M->intgData.f[3] = model2p_M->odeF[3];
  model2p_M->contStates = ((X_model2p_T *) &model2p_X);
  rtsiSetSolverData(&model2p_M->solverInfo, (void *)&model2p_M->intgData);
  rtsiSetSolverName(&model2p_M->solverInfo,"ode4");
  rtmSetTPtr(model2p_M, &model2p_M->Timing.tArray[0]);
  model2p_M->Timing.stepSize0 = 0.01;

  /* SetupRuntimeResources for Scope: '<Root>/Scope' */
  {
    const char* mobileScopeProperties1 =
      "{\"axesColor\":[0,0,0],\"axesScaling\":\"manual\",\"axesTickColor\":[0.686274509803922,0.686274509803922,0.686274509803922],\"blockType\":\"Scope\",\"displays\":[{\"lineColors\":[[1,1,0.06666666666666667],[0.07450980392156863,0.6235294117647059,1],[1,0.4117647058823529,0.1607843137254902],[0.39215686274509803,0.8313725490196079,0.07450980392156863],[0.7176470588235294,0.27450980392156865,1],[0.058823529411764705,1,1],[1,0.07450980392156863,0.6509803921568628]],\"lineStyles\":[\"-\",\"-\",\"-\",\"-\",\"-\",\"-\",\"-\"],\"lineWidths\":[0.75,0.75,0.75,0.75,0.75,0.75,0.75],\"showGrid\":true,\"showLegend\":false,\"yLimits\":[-0.38684,0.69215]}],\"frameBasedProcessing\":false,\"inputNames\":[\"Sum6\"],\"layoutDimensions\":[1,1],\"timeSpan\":30.000000000000092,\"timeSpanOverrunMode\":\"Wrap\"}";
    int_T numInputPortsScope1 = 1;
    int_T scope1ID = 1;
    real32_T sampleTimes1[1] = { 0.01 };

    INITIALIZE_PLOT(scope1ID,numInputPortsScope1,mobileScopeProperties1,
                    sampleTimes1);
  }

  /* End of Scope: '<Root>/Scope' */

  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  model2p_X.Integrator_CSTATE = model2p_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator1' */
  model2p_X.Integrator1_CSTATE = model2p_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator2' */
  model2p_X.Integrator2_CSTATE = model2p_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator3' */
  model2p_X.Integrator3_CSTATE = model2p_P.Integrator3_IC;

  /* Start for MATLABSystem: '<S1>/DataDisplay' */
  INITIALIZE_DATADISPLAY();
}

/* Model terminate function */
void model2p_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
