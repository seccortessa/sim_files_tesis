/* Include files */

#include "modelInterface.h"
#include "m_hpzEpxLGAjI6eNGb6xH7ME.h"
#include <string.h>

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "androidBLEReceive",                 /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidBLEReceive.p"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "androidSampleTime",                 /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidSampleTime.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\SampleTime.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 36,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 37,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 46,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 48,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 53,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "androidBLEReceive",                 /* fName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidBLEReceive.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp);
static codertarget_internal_androidBLEReceive
  *androidBLEReceive_androidBLEReceive(codertarget_internal_androidBLEReceive
  *obj);
static void androidBLEReceive_set_CustomServiceUUID(const emlrtStack *sp);
static void androidBLEReceive_set_CustomCharUUID(const emlrtStack *sp);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidBLEReceive *obj);
static void mw__internal__call__reset(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp, int8_T c_y0[2], uint8_T *c_y1);
static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_coder_internal_ifWhileCondExtrinsic_, const char_T *identifier);
static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static const mxArray *emlrt_marshallOut(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance);
static void c_emlrt_marshallIn(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_internal_androidBLEReceive d_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_internal_androidBLEReceive e_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const mxArray *st);
static const mxArray *regexp(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *isempty(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *coder_internal_ifWhileCondExtrinsic(const emlrtStack *sp,
  const mxArray *b, emlrtMCInfo *location);
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->b_y0,
    moduleInstance->b_y1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidBLEReceive_androidBLEReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &i_emlrtRSI;
    androidBLEReceive_set_CustomServiceUUID(&st);
    st.site = &j_emlrtRSI;
    androidBLEReceive_set_CustomCharUUID(&st);
  }

  st.site = &k_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static codertarget_internal_androidBLEReceive
  *androidBLEReceive_androidBLEReceive(codertarget_internal_androidBLEReceive
  *obj)
{
  codertarget_internal_androidBLEReceive *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  b_obj = obj;
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_obj->isInitialized = 0;
  d_st.site = &e_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  st.site = &emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &g_emlrtRSI;
  return b_obj;
}

static void androidBLEReceive_set_CustomServiceUUID(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *uuid_match;
  char_T c_val[36];
  int32_T i;
  char_T uuid_expr[77];
  static char_T d_val[36] = { '1', 'F', 'F', 'F', 'b', '8', '1', 'd', '-', '0',
    '0', '0', '0', '-', '1', '0', '0', '0', '-', '8', '0', '0', '0', '-', '0',
    '0', '8', '0', '5', 'f', '9', 'b', '3', '4', 'f', 'b' };

  static char_T b_uuid_expr[77] = { '^', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '8', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '1', '2', '}', '$' };

  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 36 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 77 };

  char_T u[5];
  const mxArray *c_y;
  static char_T b_u[5] = { 'm', 'a', 't', 'c', 'h' };

  static const int32_T iv2[2] = { 1, 5 };

  char_T c_u[35];
  static char_T d_u[35] = { 'a', 'n', 'd', 'r', 'o', 'i', 'd', ':', 'u', 't',
    'i', 'l', 's', ':', 'B', 'L', 'E', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S',
    'e', 'r', 'v', 'i', 'c', 'e', 'U', 'U', 'I', 'D' };

  static const int32_T iv3[2] = { 1, 35 };

  st.prev = sp;
  st.tls = sp->tls;
  uuid_match = NULL;
  for (i = 0; i < 36; i++) {
    c_val[i] = d_val[i];
  }

  memcpy(&uuid_expr[0], &b_uuid_expr[0], 77U * sizeof(char_T));
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 36, m, &c_val[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 77, m, &uuid_expr[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    u[i] = b_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 5, m, &u[0]);
  emlrtAssign(&c_y, m);
  st.site = &emlrtRSI;
  emlrtAssign(&uuid_match, regexp(&st, y, b_y, c_y, &emlrtMCI));
  st.site = &emlrtRSI;
  if (emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st, isempty(&st,
         emlrtAlias(uuid_match), &emlrtMCI), &emlrtMCI),
                       "<output of coder.internal.ifWhileCondExtrinsic>")) {
    for (i = 0; i < 35; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(sp, 35, m, &c_u[0]);
    emlrtAssign(&y, m);
    st.site = &emlrtRSI;
    error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
  }

  emlrtDestroyArray(&uuid_match);
}

static void androidBLEReceive_set_CustomCharUUID(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *uuid_match;
  char_T c_val[36];
  int32_T i;
  char_T uuid_expr[77];
  static char_T d_val[36] = { '6', 'd', '0', '0', '0', '0', '0', '0', '-', '3',
    '6', '0', '8', '-', '4', '1', 'f', '3', '-', 'a', '0', '3', 'c', '-', '9',
    '5', '5', 'f', 'c', 'b', 'd', '2', 'e', 'a', '4', 'b' };

  static char_T b_uuid_expr[77] = { '^', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '8', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '4', '}', '-', '[', '0', '-', '9', 'a', '-', 'f', 'A',
    '-', 'F', ']', '{', '1', '2', '}', '$' };

  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 36 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 77 };

  char_T u[5];
  const mxArray *c_y;
  static char_T b_u[5] = { 'm', 'a', 't', 'c', 'h' };

  static const int32_T iv2[2] = { 1, 5 };

  char_T c_u[42];
  static char_T d_u[42] = { 'a', 'n', 'd', 'r', 'o', 'i', 'd', ':', 'u', 't',
    'i', 'l', 's', ':', 'B', 'L', 'E', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'C',
    'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'i', 's', 't', 'i', 'c', 'U', 'U',
    'I', 'D' };

  static const int32_T iv3[2] = { 1, 42 };

  st.prev = sp;
  st.tls = sp->tls;
  uuid_match = NULL;
  for (i = 0; i < 36; i++) {
    c_val[i] = d_val[i];
  }

  memcpy(&uuid_expr[0], &b_uuid_expr[0], 77U * sizeof(char_T));
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 36, m, &c_val[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 77, m, &uuid_expr[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    u[i] = b_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 5, m, &u[0]);
  emlrtAssign(&c_y, m);
  st.site = &emlrtRSI;
  emlrtAssign(&uuid_match, regexp(&st, y, b_y, c_y, &emlrtMCI));
  st.site = &emlrtRSI;
  if (emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st, isempty(&st,
         emlrtAlias(uuid_match), &emlrtMCI), &emlrtMCI),
                       "<output of coder.internal.ifWhileCondExtrinsic>")) {
    for (i = 0; i < 42; i++) {
      c_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(sp, 42, m, &c_u[0]);
    emlrtAssign(&y, m);
    st.site = &emlrtRSI;
    error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
  }

  emlrtDestroyArray(&uuid_match);
}

static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidBLEReceive *obj)
{
  emlrtStack st;
  char_T u[51];
  int32_T i;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->isInitialized = 1;
}

static void mw__internal__call__reset(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T u[45];
  int32_T i;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidBLEReceive_androidBLEReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &i_emlrtRSI;
    androidBLEReceive_set_CustomServiceUUID(&st);
    st.site = &j_emlrtRSI;
    androidBLEReceive_set_CustomCharUUID(&st);
  }

  st.site = &l_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp, int8_T c_y0[2], uint8_T *c_y1)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  codertarget_internal_androidBLEReceive *obj;
  char_T u[45];
  int32_T i;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[4];
  const mxArray *c_y;
  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidBLEReceive_androidBLEReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &i_emlrtRSI;
    androidBLEReceive_set_CustomServiceUUID(&st);
    st.site = &j_emlrtRSI;
    androidBLEReceive_set_CustomCharUUID(&st);
  }

  st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  for (i = 0; i < 2; i++) {
    c_y0[i] = 0;
  }

  *c_y1 = 0U;
}

static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_coder_internal_ifWhileCondExtrinsic_, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias
    (a__output_of_coder_internal_ifWhileCondExtrinsic_), &thisId);
  emlrtDestroyArray(&a__output_of_coder_internal_ifWhileCondExtrinsic_);
  return y;
}

static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv[1] = { "isInitialized" };

  int32_T u;
  const mxArray *c_y;
  const mxArray *m;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void c_emlrt_marshallIn(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static codertarget_internal_androidBLEReceive d_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_internal_androidBLEReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_internal_androidBLEReceive e_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_internal_androidBLEReceive y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "isInitialized" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 1, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  c_emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *regexp(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "regexp", true, location);
}

static const mxArray *isempty(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "isempty", true, location);
}

static const mxArray *coder_internal_ifWhileCondExtrinsic(const emlrtStack *sp,
  const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray,
    "coder.internal.ifWhileCondExtrinsic", true, location);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (int8_T (*)[2])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
}

/* CGXE Glue Code */
static void mdlOutputs_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S, int_T tid)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S, int_T tid)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
  InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *moduleInstance =
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME *)calloc(1, sizeof
    (InstanceStruct_hpzEpxLGAjI6eNGb6xH7ME));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_hpzEpxLGAjI6eNGb6xH7ME);
  ssSetmdlInitializeConditions(S, mdlInitialize_hpzEpxLGAjI6eNGb6xH7ME);
  ssSetmdlUpdate(S, mdlUpdate_hpzEpxLGAjI6eNGb6xH7ME);
  ssSetmdlTerminate(S, mdlTerminate_hpzEpxLGAjI6eNGb6xH7ME);
  ssSetmdlEnable(S, mdlEnable_hpzEpxLGAjI6eNGb6xH7ME);
  ssSetmdlDisable(S, mdlDisable_hpzEpxLGAjI6eNGb6xH7ME);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S)
{
}

void method_dispatcher_hpzEpxLGAjI6eNGb6xH7ME(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_hpzEpxLGAjI6eNGb6xH7ME(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_hpzEpxLGAjI6eNGb6xH7ME(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_hpzEpxLGAjI6eNGb6xH7ME(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_hpzEpxLGAjI6eNGb6xH7ME(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: hpzEpxLGAjI6eNGb6xH7ME.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_hpzEpxLGAjI6eNGb6xH7ME_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.internal.androidBLEReceive");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_hpzEpxLGAjI6eNGb6xH7ME_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.internal.androidBLEReceive");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
