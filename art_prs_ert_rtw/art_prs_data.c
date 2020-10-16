/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: art_prs_data.c
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

/* Block parameters (default storage) */
P_art_prs_T art_prs_P = {
  /* Variable: A1
   * Referenced by: '<S8>/Gain2'
   */
  0.40341,

  /* Variable: Ca
   * Referenced by: '<Root>/Gain2'
   */
  2.0,

  /* Variable: Ce
   * Referenced by: '<Root>/Gain'
   */
  1.69,

  /* Variable: Cv
   * Referenced by: '<Root>/Gain1'
   */
  15.0,

  /* Variable: Ed
   * Referenced by: '<S7>/Constant'
   */
  0.0655,

  /* Variable: Es0
   * Referenced by: '<S6>/Constant'
   */
  0.57,

  /* Variable: Ra
   * Referenced by:
   *   '<Root>/Constant'
   *   '<Root>/Constant2'
   */
  0.025,

  /* Variable: Re0
   * Referenced by: '<S8>/Gain'
   */
  0.0055222,

  /* Variable: Rlv
   * Referenced by:
   *   '<Root>/Constant3'
   *   '<Root>/Constant6'
   */
  0.41279,

  /* Variable: Rv
   * Referenced by:
   *   '<Root>/Constant1'
   *   '<Root>/Constant4'
   */
  0.02,

  /* Variable: c1
   * Referenced by: '<S6>/Gain1'
   */
  0.01,

  /* Variable: c2
   * Referenced by:
   *   '<S5>/Gain'
   *   '<S6>/Gain'
   */
  4.0153,

  /* Variable: c3
   * Referenced by: '<S5>/Gain1'
   */
  0.000498,

  /* Variable: epsilon
   * Referenced by: '<S8>/Gain1'
   */
  1.0E-5,

  /* Variable: omega0
   * Referenced by:
   *   '<S5>/Constant'
   *   '<S5>/Gain'
   *   '<S6>/Gain'
   */
  8.37,

  /* Mask Parameter: RepeatingSequence_rep_seq_y
   * Referenced by: '<S11>/Look-Up Table1'
   */
  { 0.0, 0.0, 1.0, 1.0 },

  /* Mask Parameter: MinMaxRunningResettable1_vinit
   * Referenced by:
   *   '<S9>/Initial Condition'
   *   '<S9>/Memory'
   */
  70.0,

  /* Mask Parameter: MinMaxRunningResettable2_vinit
   * Referenced by:
   *   '<S10>/Initial Condition'
   *   '<S10>/Memory'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<Root>/Pulse Generator1'
   */
  800.0,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<Root>/Pulse Generator1'
   */
  40.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator1'
   */
  0.0,

  /* Expression: 70
   * Referenced by: '<Root>/Arteria'
   */
  70.0,

  /* Expression: 54
   * Referenced by: '<Root>/Constant7'
   */
  54.0,

  /* Expression: 49.896
   * Referenced by: '<Root>/Salida de ventr'
   */
  49.896,

  /* Expression: 49.714/0.0655
   * Referenced by: '<Root>/Volume'
   */
  758.99236641221364,

  /* Expression: 3/2
   * Referenced by: '<S5>/Gain2'
   */
  1.5,

  /* Expression: period
   * Referenced by: '<S11>/Constant'
   */
  0.75068,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S11>/Look-Up Table1'
   */
  { 0.0, 0.5004778547546751, 0.5014778547546751, 0.75067924816960419 },

  /* Expression: 1
   * Referenced by: '<S8>/Constant'
   */
  1.0,

  /* Expression: 16.628
   * Referenced by: '<Root>/Vena'
   */
  16.628
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
