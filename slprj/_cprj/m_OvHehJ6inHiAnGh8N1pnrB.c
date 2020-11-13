/* Include files */

#include "modelInterface.h"
#include "m_OvHehJ6inHiAnGh8N1pnrB.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "androidSlider",                     /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidSlider.p"/* pathName */
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
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 30,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 32,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 37,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "androidSlider",                     /* fName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020a\\toolbox\\target\\supportpackages\\android\\+codertarget\\+internal\\androidSlider.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp);
static codertarget_internal_androidSlider *androidSlider_androidSlider
  (codertarget_internal_androidSlider *obj);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidSlider *obj);
static void androidSlider_validatePropertiesImpl(const emlrtStack *sp);
static void linspace(real_T y[1001]);
static boolean_T any(boolean_T x[1001]);
static real_T minimum(real_T x[1001]);
static void mw__internal__call__reset(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp);
static real32_T mw__internal__call__step(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp);
static const mxArray *emlrt_marshallOut(const real_T u);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_horzcat_, const char_T *identifier, real_T y_data[], int32_T
  y_sizes[2]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_sizes[2]);
static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_sizes[2]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [32]);
static const mxArray *e_emlrt_marshallOut(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *
  moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance);
static void c_emlrt_marshallIn(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_internal_androidSlider d_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_internal_androidSlider e_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *MException(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void throwAsCaller(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_sizes[2]);
static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance)
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

static void cgxe_mdl_initialize(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
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

static void cgxe_mdl_outputs(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  *moduleInstance->b_y0 = mw__internal__call__step(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    androidSlider_androidSlider(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &i_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static codertarget_internal_androidSlider *androidSlider_androidSlider
  (codertarget_internal_androidSlider *obj)
{
  codertarget_internal_androidSlider *b_obj;
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
  b_st.site = &g_emlrtRSI;
  st.site = &emlrtRSI;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp,
  codertarget_internal_androidSlider *obj)
{
  emlrtStack st;
  emlrtStack b_st;
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
  b_st.prev = &st;
  b_st.tls = st.tls;
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
  b_st.site = &e_emlrtRSI;
  androidSlider_validatePropertiesImpl(&b_st);
}

static void androidSlider_validatePropertiesImpl(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *ME;
  real_T values[1001];
  real_T diff[1001];
  boolean_T b_diff[1001];
  int32_T k;
  real_T minval;
  int32_T closest_sizes[2];
  int32_T partialTrueCount;
  int32_T i;
  boolean_T b;
  real_T closest_data[1001];
  real_T d;
  static char_T cv[32] = { 'a', 'n', 'd', 'r', 'o', 'i', 'd', ':', 'b', 'u', 'i',
    'l', 'd', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'l', 'i', 'd', 'e',
    'r', 'V', 'a', 'l', 'u', 'e' };

  static char_T cv1[4] = { ' ', 'o', 'r', ' ' };

  st.prev = sp;
  st.tls = sp->tls;
  ME = NULL;
  linspace(values);
  for (k = 0; k < 1001; k++) {
    diff[k] = muDoubleScalarAbs(values[k]);
    b_diff[k] = (diff[k] <= 2.2204460492503131E-15);
  }

  if (!any(b_diff)) {
    for (k = 0; k < 1001; k++) {
      diff[k] = muDoubleScalarAbs(values[k]);
    }

    minval = minimum(diff);
    k = 0;
    closest_sizes[0] = 1;
    partialTrueCount = 0;
    for (i = 0; i < 1001; i++) {
      b = (diff[i] == minval);
      if (b) {
        k++;
        closest_data[partialTrueCount] = values[i];
        partialTrueCount++;
      }
    }

    closest_sizes[1] = k;
    if (k == 2) {
      minval = closest_data[0];
      d = closest_data[1];
      st.site = &emlrtRSI;
      emlrt_marshallIn(&st, horzcat(&st, num2str(&st, emlrt_marshallOut(minval),
        &b_emlrtMCI), b_emlrt_marshallOut(&st, cv1), num2str(&st,
        emlrt_marshallOut(d), &b_emlrtMCI), &b_emlrtMCI), "<output of horzcat>",
                       closest_data, closest_sizes);
    } else {
      st.site = &emlrtRSI;
      emlrt_marshallIn(&st, num2str(&st, c_emlrt_marshallOut(closest_data,
        closest_sizes), &b_emlrtMCI), "<output of num2str>", closest_data,
                       closest_sizes);
    }

    st.site = &emlrtRSI;
    emlrtAssign(&ME, MException(&st, message(&st, d_emlrt_marshallOut(&st, cv),
      c_emlrt_marshallOut(closest_data, closest_sizes), &b_emlrtMCI),
      &b_emlrtMCI));
    st.site = &emlrtRSI;
    throwAsCaller(&st, emlrtAlias(ME), &b_emlrtMCI);
  }

  emlrtDestroyArray(&ME);
}

static void linspace(real_T y[1001])
{
  int32_T k;
  y[1000] = 5.0;
  y[0] = -5.0;
  for (k = 0; k < 999; k++) {
    y[k + 1] = 5.0 * ((2.0 * ((real_T)k + 2.0) - 1002.0) / 1000.0);
  }

  y[500] = 0.0;
}

static boolean_T any(boolean_T x[1001])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 1001)) {
    if (x[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static real_T minimum(real_T x[1001])
{
  real_T ex;
  int32_T k;
  ex = x[0];
  for (k = 0; k < 1000; k++) {
    if (ex > x[k + 1]) {
      ex = x[k + 1];
    }
  }

  return ex;
}

static void mw__internal__call__reset(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
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
    androidSlider_androidSlider(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
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
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static real32_T mw__internal__call__step(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  codertarget_internal_androidSlider *obj;
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
    androidSlider_androidSlider(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
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
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  return 0.0F;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 4 };

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 4, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_horzcat_, const char_T *identifier, real_T y_data[], int32_T
  y_sizes[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_horzcat_), &thisId, y_data,
                     y_sizes);
  emlrtDestroyArray(&a__output_of_horzcat_);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_sizes[2])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_sizes);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_sizes[2])
{
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  const mxArray *m;
  real_T *pData;
  int32_T b_i;
  y = NULL;
  for (i = 0; i < 2; i++) {
    iv[i] = u_sizes[i];
  }

  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u_sizes[1]; b_i++) {
    pData[i] = u_data[u_sizes[0] * b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [32])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 32 };

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 32, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *
  moduleInstance)
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
  (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, e_emlrt_marshallOut(moduleInstance));
  return st;
}

static void c_emlrt_marshallIn(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
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

static codertarget_internal_androidSlider d_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_internal_androidSlider y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_internal_androidSlider e_emlrt_marshallIn(const emlrtStack
  *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_internal_androidSlider y;
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
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
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

static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "num2str", true, location);
}

static const mxArray *MException(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "MException", true,
    location);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "horzcat", true, location);
}

static void throwAsCaller(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throwAsCaller", true, location);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_sizes[2])
{
  static const int32_T dims[2] = { 1, 1001 };

  boolean_T bv[2] = { false, true };

  int32_T iv[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret_sizes[0] = iv[0];
  ret_sizes[1] = iv[1];
  emlrtImportArrayR2015b(sp, src, ret_data, 8, false);
  emlrtDestroyArray(&src);
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

static void init_simulink_io_address(InstanceStruct_OvHehJ6inHiAnGh8N1pnrB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (real32_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
}

/* CGXE Glue Code */
static void mdlOutputs_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S, int_T tid)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S, int_T tid)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
  InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *moduleInstance =
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB *)calloc(1, sizeof
    (InstanceStruct_OvHehJ6inHiAnGh8N1pnrB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_OvHehJ6inHiAnGh8N1pnrB);
  ssSetmdlInitializeConditions(S, mdlInitialize_OvHehJ6inHiAnGh8N1pnrB);
  ssSetmdlUpdate(S, mdlUpdate_OvHehJ6inHiAnGh8N1pnrB);
  ssSetmdlTerminate(S, mdlTerminate_OvHehJ6inHiAnGh8N1pnrB);
  ssSetmdlEnable(S, mdlEnable_OvHehJ6inHiAnGh8N1pnrB);
  ssSetmdlDisable(S, mdlDisable_OvHehJ6inHiAnGh8N1pnrB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S)
{
}

void method_dispatcher_OvHehJ6inHiAnGh8N1pnrB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_OvHehJ6inHiAnGh8N1pnrB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_OvHehJ6inHiAnGh8N1pnrB(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_OvHehJ6inHiAnGh8N1pnrB(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_OvHehJ6inHiAnGh8N1pnrB(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: OvHehJ6inHiAnGh8N1pnrB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_OvHehJ6inHiAnGh8N1pnrB_BuildInfoUpdate(void)
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
  elem_9 = mxCreateString("codertarget.internal.androidSlider");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_OvHehJ6inHiAnGh8N1pnrB_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.internal.androidSlider");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
