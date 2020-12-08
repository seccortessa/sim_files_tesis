/* Include files */

#include "modelInterface.h"
#include "m_K9AeZupfj9lCdYMneE92cD.h"
#include <string.h>

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "androidBLESend",                    /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidBLESend.p"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 34,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 43,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 45,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 50,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "androidBLESend",                    /* fName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidBLESend.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp);
static void androidBLESend_set_CustomServiceUUID(const emlrtStack *sp);
static void androidBLESend_set_CustomCharUUID(const emlrtStack *sp);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidBLESend *obj);
static void mw__internal__call__reset(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp);
static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_coder_internal_ifWhileCondExtrinsic_, const char_T *identifier);
static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static const mxArray *emlrt_marshallOut(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance);
static void c_emlrt_marshallIn(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_internal_androidBLESend d_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_internal_androidBLESend e_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8]);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_K9AeZupfj9lCdYMneE92cD
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
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static void init_simulink_io_address(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance)
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

static void cgxe_mdl_initialize(InstanceStruct_K9AeZupfj9lCdYMneE92cD
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

static void cgxe_mdl_outputs(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  codertarget_internal_androidBLESend *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    androidBLESend_set_CustomServiceUUID(&st);
    st.site = &h_emlrtRSI;
    androidBLESend_set_CustomCharUUID(&st);
  }

  st.site = &i_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void androidBLESend_set_CustomServiceUUID(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *uuid_match;
  char_T c_val[36];
  int32_T i;
  char_T uuid_expr[77];
  static char_T d_val[36] = { '0', '0', '0', '0', 'b', '8', '1', 'd', '-', '0',
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

static void androidBLESend_set_CustomCharUUID(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *uuid_match;
  char_T c_val[36];
  int32_T i;
  char_T uuid_expr[77];
  static char_T d_val[36] = { '3', '6', 'd', '4', 'd', 'c', '5', 'c', '-', '8',
    '1', '4', 'b', '-', '4', '0', '9', '7', '-', 'a', '5', 'a', '6', '-', 'b',
    '9', '3', 'b', '3', '9', '0', '8', '5', '9', '2', '8' };

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
  codertarget_internal_androidBLESend *obj)
{
  emlrtStack st;
  char_T u[51];
  int32_T i;
  cell_wrap varSizes[1];
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  static int8_T iv1[8] = { 4, 1, 1, 1, 1, 1, 1, 1 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv3[2] = { 1, 5 };

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
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  for (i = 0; i < 8; i++) {
    varSizes[0].f1[i] = (uint32_T)iv1[i];
  }

  obj->inputVarSize[0] = varSizes[0];
}

static void mw__internal__call__reset(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  codertarget_internal_androidBLESend *obj;
  char_T u[45];
  emlrtStack c_st;
  int32_T i;
  emlrtStack d_st;
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
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    androidBLESend_set_CustomServiceUUID(&st);
    st.site = &h_emlrtRSI;
    androidBLESend_set_CustomCharUUID(&st);
  }

  st.site = &j_emlrtRSI;
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
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  codertarget_internal_androidBLESend *obj;
  char_T u[45];
  emlrtStack d_st;
  int32_T k;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  boolean_T exitg1;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  static int8_T inSize[8] = { 4, 1, 1, 1, 1, 1, 1, 1 };

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
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    androidBLESend_set_CustomServiceUUID(&st);
    st.site = &h_emlrtRSI;
    androidBLESend_set_CustomCharUUID(&st);
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 4; k++) {
      c_u[k] = d_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }
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
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv[2] = { "isInitialized", "inputVarSize" };

  int32_T u;
  const mxArray *c_y;
  const mxArray *m;
  cell_wrap b_u[1];
  int32_T iv[1];
  static const char * sv1[1] = { "f1" };

  const cell_wrap *r;
  uint32_T c_u[8];
  const mxArray *d_y;
  static const int32_T iv1[2] = { 1, 8 };

  uint32_T *pData;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u[0] = moduleInstance->sysobj.inputVarSize[0];
  c_y = NULL;
  iv[0] = 1;
  emlrtAssign(&c_y, emlrtCreateStructArray(1, iv, 1, sv1));
  r = &b_u[0];
  for (u = 0; u < 8; u++) {
    c_u[u] = r->f1[u];
  }

  d_y = NULL;
  m = emlrtCreateNumericArray(2, &iv1[0], mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)emlrtMxGetData(m);
  u = 0;
  for (i = 0; i < 8; i++) {
    pData[u] = c_u[i];
    u++;
  }

  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(c_y, 0, "f1", d_y, 0);
  emlrtSetFieldR2017b(b_y, 0, "inputVarSize", c_y, 1);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void c_emlrt_marshallIn(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static codertarget_internal_androidBLESend d_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_internal_androidBLESend y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_internal_androidBLESend e_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_internal_androidBLESend y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "inputVarSize" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "inputVarSize";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "inputVarSize")), &thisId, y.inputVarSize);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1])
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "f1" };

  static const int32_T dims[1] = { 1 };

  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 1, fieldNames, 1U, dims);
  thisId.fIdentifier = "f1";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "f1")),
                     &thisId, y[0].f1);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_K9AeZupfj9lCdYMneE92cD
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

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8])
{
  static const int32_T dims[2] = { 1, 8 };

  uint32_T (*r)[8];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint32", false, 2U, dims);
  r = (uint32_T (*)[8])emlrtMxGetData(src);
  for (i = 0; i < 8; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void init_simulink_io_address(InstanceStruct_K9AeZupfj9lCdYMneE92cD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (int16_T (*)[4])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_K9AeZupfj9lCdYMneE92cD(SimStruct *S, int_T tid)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_K9AeZupfj9lCdYMneE92cD(SimStruct *S, int_T tid)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_K9AeZupfj9lCdYMneE92cD(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
  InstanceStruct_K9AeZupfj9lCdYMneE92cD *moduleInstance =
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD *)calloc(1, sizeof
    (InstanceStruct_K9AeZupfj9lCdYMneE92cD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_K9AeZupfj9lCdYMneE92cD);
  ssSetmdlInitializeConditions(S, mdlInitialize_K9AeZupfj9lCdYMneE92cD);
  ssSetmdlUpdate(S, mdlUpdate_K9AeZupfj9lCdYMneE92cD);
  ssSetmdlTerminate(S, mdlTerminate_K9AeZupfj9lCdYMneE92cD);
  ssSetmdlEnable(S, mdlEnable_K9AeZupfj9lCdYMneE92cD);
  ssSetmdlDisable(S, mdlDisable_K9AeZupfj9lCdYMneE92cD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_K9AeZupfj9lCdYMneE92cD(SimStruct *S)
{
}

void method_dispatcher_K9AeZupfj9lCdYMneE92cD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_K9AeZupfj9lCdYMneE92cD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_K9AeZupfj9lCdYMneE92cD(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_K9AeZupfj9lCdYMneE92cD(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_K9AeZupfj9lCdYMneE92cD(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: K9AeZupfj9lCdYMneE92cD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_K9AeZupfj9lCdYMneE92cD_BuildInfoUpdate(void)
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
  elem_9 = mxCreateString("codertarget.internal.androidBLESend");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_K9AeZupfj9lCdYMneE92cD_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.internal.androidBLESend");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
