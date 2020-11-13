/* Include files */

#include "modelInterface.h"
#include "m_qB5Jf0SlbbOQvmBmlCDBDH.h"
#include <string.h>

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "androidTCPSend",                    /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidTCPSend.p"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "TCPSend",                           /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\shared_linuxservices\\+sharedlinux\\TCPSend.p"/* pathName */
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
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\+internal\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 10,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 30,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 19,  /* lineNo */
  "swapbytes",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\datatypes\\swapbytes.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp);
static codertarget_internal_androidTCPSend *androidTCPSend_androidTCPSend
  (codertarget_internal_androidTCPSend *obj);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidTCPSend *obj);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_internal_androidTCPSend *obj);
static void mw__internal__call__reset(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp, real_T b_u0);
static const mxArray *emlrt_marshallOut(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_internal_androidTCPSend b_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_internal_androidTCPSend c_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static uint8_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int16_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static int32_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static uint8_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int16_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance)
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

static void cgxe_mdl_initialize(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
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

static void cgxe_mdl_outputs(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidTCPSend_androidTCPSend(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &i_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static codertarget_internal_androidTCPSend *androidTCPSend_androidTCPSend
  (codertarget_internal_androidTCPSend *obj)
{
  codertarget_internal_androidTCPSend *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  b_obj = obj;
  st.site = &emlrtRSI;
  b_obj->isLittleEnd_ = 0U;
  b_obj->errorNo_ = 0;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_obj->isInitialized = 0;
  b_obj->TunablePropsChanged = false;
  d_st.site = &e_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidTCPSend *obj)
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
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_internal_androidTCPSend *obj)
{
  emlrtStack st;
  char_T u[44];
  int32_T i;
  const mxArray *y;
  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 44 };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  codertarget_internal_androidTCPSend *obj;
  char_T u[45];
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv1[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  char_T e_u[5];
  const mxArray *c_y;
  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv4[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidTCPSend_androidTCPSend(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &j_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp, real_T b_u0)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  codertarget_internal_androidTCPSend *obj;
  char_T u[45];
  int32_T b_j1;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  emlrtStack d_st;
  uint8_T b_y[8];
  emlrtStack e_st;
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[4];
  uint8_T xtmp;
  real_T x;
  const mxArray *d_y;
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
    androidTCPSend_androidTCPSend(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (b_j1 = 0; b_j1 < 45; b_j1++) {
      u[b_j1] = b_u[b_j1];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (b_j1 = 0; b_j1 < 45; b_j1++) {
      u[b_j1] = b_u[b_j1];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (b_j1 = 0; b_j1 < 4; b_j1++) {
      c_u[b_j1] = d_u[b_j1];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, d_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  c_st.site = &emlrtRSI;
  if (obj->isLittleEnd_ == 1) {
    d_st.site = &b_emlrtRSI;
    e_st.site = &l_emlrtRSI;
    memcpy((void *)&b_y[0], (void *)&b_u0, (uint32_T)((size_t)8 * sizeof(uint8_T)));
    for (b_j1 = 0; b_j1 < 4; b_j1++) {
      xtmp = b_y[b_j1];
      b_y[b_j1] = b_y[7 - b_j1];
      b_y[7 - b_j1] = xtmp;
    }

    e_st.site = &l_emlrtRSI;
    memcpy((void *)&x, (void *)&b_y[0], (uint32_T)((size_t)1 * sizeof(real_T)));
  }

  b_st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, obj);
}

static const mxArray *emlrt_marshallOut(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv[4] = { "isInitialized", "TunablePropsChanged",
    "isLittleEnd_", "errorNo_" };

  int32_T u;
  const mxArray *c_y;
  const mxArray *m;
  boolean_T b_u;
  uint8_T c_u;
  int16_T d_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 4, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 1);
  c_u = moduleInstance->sysobj.isLittleEnd_;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT8_CLASS, mxREAL);
  *(uint8_T *)emlrtMxGetData(m) = c_u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isLittleEnd_", c_y, 2);
  d_u = moduleInstance->sysobj.errorNo_;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)emlrtMxGetData(m) = d_u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "errorNo_", c_y, 3);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = h_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static codertarget_internal_androidTCPSend b_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_internal_androidTCPSend y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_internal_androidTCPSend c_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_internal_androidTCPSend y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "isInitialized", "TunablePropsChanged",
    "isLittleEnd_", "errorNo_" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "isLittleEnd_";
  y.isLittleEnd_ = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "isLittleEnd_")), &thisId);
  thisId.fIdentifier = "errorNo_";
  y.errorNo_ = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "errorNo_")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static uint8_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint8_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int16_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int16_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
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

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static int32_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static uint8_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  uint8_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 0U, &dims);
  ret = *(uint8_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int16_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int16_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int16", false, 0U, &dims);
  ret = *(int16_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S, int_T tid)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S, int_T tid)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
  InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *moduleInstance =
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH *)calloc(1, sizeof
    (InstanceStruct_qB5Jf0SlbbOQvmBmlCDBDH));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_qB5Jf0SlbbOQvmBmlCDBDH);
  ssSetmdlInitializeConditions(S, mdlInitialize_qB5Jf0SlbbOQvmBmlCDBDH);
  ssSetmdlUpdate(S, mdlUpdate_qB5Jf0SlbbOQvmBmlCDBDH);
  ssSetmdlTerminate(S, mdlTerminate_qB5Jf0SlbbOQvmBmlCDBDH);
  ssSetmdlEnable(S, mdlEnable_qB5Jf0SlbbOQvmBmlCDBDH);
  ssSetmdlDisable(S, mdlDisable_qB5Jf0SlbbOQvmBmlCDBDH);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S)
{
}

void method_dispatcher_qB5Jf0SlbbOQvmBmlCDBDH(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_qB5Jf0SlbbOQvmBmlCDBDH(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_qB5Jf0SlbbOQvmBmlCDBDH(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_qB5Jf0SlbbOQvmBmlCDBDH(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_qB5Jf0SlbbOQvmBmlCDBDH(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: qB5Jf0SlbbOQvmBmlCDBDH.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_qB5Jf0SlbbOQvmBmlCDBDH_BuildInfoUpdate(void)
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
  elem_9 = mxCreateString("codertarget.internal.androidTCPSend");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_qB5Jf0SlbbOQvmBmlCDBDH_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.internal.androidTCPSend");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
