/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ex3p_types.h
 *
 * Code generated for Simulink model 'ex3p'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Oct 16 22:45:11 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex3p_types_h_
#define RTW_HEADER_ex3p_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D

struct tag_PMfBDzoakfdM9QAdfx2o6D
{
  uint32_T f1[8];
};

#endif                                 /*struct_tag_PMfBDzoakfdM9QAdfx2o6D*/

#ifndef typedef_cell_wrap_ex3p_T
#define typedef_cell_wrap_ex3p_T

typedef struct tag_PMfBDzoakfdM9QAdfx2o6D cell_wrap_ex3p_T;

#endif                                 /*typedef_cell_wrap_ex3p_T*/

#ifndef struct_tag_ypl2qxsMwxoAIyqbqeICFF
#define struct_tag_ypl2qxsMwxoAIyqbqeICFF

struct tag_ypl2qxsMwxoAIyqbqeICFF
{
  int32_T isInitialized;
  cell_wrap_ex3p_T inputVarSize;
};

#endif                                 /*struct_tag_ypl2qxsMwxoAIyqbqeICFF*/

#ifndef typedef_codertarget_internal_androidD_T
#define typedef_codertarget_internal_androidD_T

typedef struct tag_ypl2qxsMwxoAIyqbqeICFF codertarget_internal_androidD_T;

#endif                               /*typedef_codertarget_internal_androidD_T*/

/* Parameters (default storage) */
typedef struct P_ex3p_T_ P_ex3p_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ex3p_T RT_MODEL_ex3p_T;

#endif                                 /* RTW_HEADER_ex3p_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
