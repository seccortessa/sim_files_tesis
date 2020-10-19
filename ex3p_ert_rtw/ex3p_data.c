/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ex3p_data.c
 *
 * Code generated for Simulink model 'ex3p'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Oct 18 18:58:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ex3p.h"
#include "ex3p_private.h"

/* Block parameters (default storage) */
P_ex3p_T ex3p_P = {
  /* Variable: offsetMaxFinder
   * Referenced by:
   *   '<S3>/offsetConteo'
   *   '<S6>/Initial Condition'
   *   '<S6>/Memory'
   */
  0.0045,

  /* Mask Parameter: Counter1_InitialCount
   * Referenced by: '<S3>/Counter1'
   */
  0U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  0.0,

  /* Expression: [offsetMaxFinder]
   * Referenced by: '<S3>/Delay'
   */
  0.0045,

  /* Expression: 1000
   * Referenced by: '<S2>/Integrator'
   */
  1000.0,

  /* Expression: [gananciaOut]
   * Referenced by: '<S2>/Gain2'
   */
  0.7,

  /* Expression: 1
   * Referenced by: '<S3>/Constant17'
   */
  1.0,

  /* Expression: 10
   * Referenced by: '<S3>/Constant18'
   */
  10.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant14'
   */
  1.0,

  /* Expression: 0.15e-3
   * Referenced by: '<S2>/Sine Wave'
   */
  0.00015,

  /* Expression: 0
   * Referenced by: '<S2>/Sine Wave'
   */
  0.0,

  /* Expression: pi/2
   * Referenced by: '<S2>/Sine Wave'
   */
  1.5707963267948966,

  /* Expression: 0
   * Referenced by: '<S2>/Sine Wave'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<Root>/Constant4'
   */
  0.6,

  /* Expression: 0
   * Referenced by: '<S2>/Integrator1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S2>/Integrator2'
   */
  2.0,

  /* Expression: pi/2
   * Referenced by: '<S2>/Constant1'
   */
  1.5707963267948966,

  /* Expression: 0.05
   * Referenced by: '<S2>/Constant5'
   */
  0.05,

  /* Expression: -1
   * Referenced by: '<S2>/Gain'
   */
  -1.0,

  /* Expression: -5
   * Referenced by: '<Root>/Constant6'
   */
  -5.0,

  /* Expression: pi/12
   * Referenced by: '<S2>/Constant2'
   */
  0.26179938779914941,

  /* Expression: 0.02
   * Referenced by: '<S2>/Constant7'
   */
  0.02,

  /* Expression: -1
   * Referenced by: '<S2>/Gain1'
   */
  -1.0,

  /* Expression: 15
   * Referenced by: '<Root>/Constant8'
   */
  15.0,

  /* Expression: 0.02
   * Referenced by: '<S2>/Constant9'
   */
  0.02,

  /* Expression: -1
   * Referenced by: '<S2>/Gain9'
   */
  -1.0,

  /* Expression: -7.5
   * Referenced by: '<Root>/Constant10'
   */
  -7.5,

  /* Expression: pi/12
   * Referenced by: '<S2>/Constant16'
   */
  0.26179938779914941,

  /* Expression: 0.02
   * Referenced by: '<S2>/Constant11'
   */
  0.02,

  /* Expression: -1
   * Referenced by: '<S2>/Gain10'
   */
  -1.0,

  /* Expression: 0.75*0.5
   * Referenced by: '<Root>/Constant12'
   */
  0.375,

  /* Expression: 4*pi/6
   * Referenced by: '<S2>/Constant3'
   */
  2.0943951023931953,

  /* Expression: 0.25
   * Referenced by: '<S2>/Constant13'
   */
  0.25,

  /* Expression: -1
   * Referenced by: '<S2>/Gain11'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S2>/Gain8'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant'
   */
  1.0,

  /* Expression: 8
   * Referenced by: '<Root>/Constant'
   */
  8.0,

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S3>/Delay1'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
