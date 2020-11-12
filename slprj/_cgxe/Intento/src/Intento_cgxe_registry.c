#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                Intento_cgxe
#include "simstruc.h"
#include "Intento_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_Intento_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(9, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 268471945;
  checksumData[1] = 3828411685;
  checksumData[2] = 1617643380;
  checksumData[3] = 1302899676;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1020894022;
  checksumData[1] = 2726993822;
  checksumData[2] = 1721255239;
  checksumData[3] = 481454015;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1482233602;
  checksumData[1] = 3853437561;
  checksumData[2] = 2606591014;
  checksumData[3] = 74556668;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2020237165;
  checksumData[1] = 2764900643;
  checksumData[2] = 24325989;
  checksumData[3] = 306755350;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2306090475;
  checksumData[1] = 472997588;
  checksumData[2] = 59359195;
  checksumData[3] = 1018778918;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2880469700;
  checksumData[1] = 1543204497;
  checksumData[2] = 3169235482;
  checksumData[3] = 876882256;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3548605437;
  checksumData[1] = 3448288418;
  checksumData[2] = 3456139171;
  checksumData[3] = 1927180259;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3662582201;
  checksumData[1] = 4064027367;
  checksumData[2] = 409213009;
  checksumData[3] = 2490726162;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 4034091254;
  checksumData[1] = 981772958;
  checksumData[2] = 882177634;
  checksumData[3] = 2384950179;
  mxSetCell(mxModules, 8, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 1117949637;
    checksumData[1] = 668519176;
    checksumData[2] = 1494917147;
    checksumData[3] = 3835303750;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3534709695;
    checksumData[1] = 3830533493;
    checksumData[2] = 1747728764;
    checksumData[3] = 975021653;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 0;
    checksumData[1] = 0;
    checksumData[2] = 0;
    checksumData[3] = 0;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 4008200204;
    checksumData[1] = 1851587218;
    checksumData[2] = 3391742740;
    checksumData[3] = 3068888580;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Intento_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
    (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Intento_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
    prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "BUi44WLECWKNtu26g8w0xF") == 0) {
    extern mxArray *cgxe_BUi44WLECWKNtu26g8w0xF_BuildInfoUpdate(void);
    plhs[0] = cgxe_BUi44WLECWKNtu26g8w0xF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "ThQHiJhvPXdtU7oOZUkdrB") == 0) {
    extern mxArray *cgxe_ThQHiJhvPXdtU7oOZUkdrB_BuildInfoUpdate(void);
    plhs[0] = cgxe_ThQHiJhvPXdtU7oOZUkdrB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "7d7eSkxBwiXHOOXhwabJcC") == 0) {
    extern mxArray *cgxe_7d7eSkxBwiXHOOXhwabJcC_BuildInfoUpdate(void);
    plhs[0] = cgxe_7d7eSkxBwiXHOOXhwabJcC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "jpN4V8nRBZ19Qo0HM1C1cB") == 0) {
    extern mxArray *cgxe_jpN4V8nRBZ19Qo0HM1C1cB_BuildInfoUpdate(void);
    plhs[0] = cgxe_jpN4V8nRBZ19Qo0HM1C1cB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "Ge0LVOj0qhOJUqINmJZqjG") == 0) {
    extern mxArray *cgxe_Ge0LVOj0qhOJUqINmJZqjG_BuildInfoUpdate(void);
    plhs[0] = cgxe_Ge0LVOj0qhOJUqINmJZqjG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "l6WNEwegbe6ekuo8EkOKJB") == 0) {
    extern mxArray *cgxe_l6WNEwegbe6ekuo8EkOKJB_BuildInfoUpdate(void);
    plhs[0] = cgxe_l6WNEwegbe6ekuo8EkOKJB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "LmvVHdFbVZCYgULAbIdBRF") == 0) {
    extern mxArray *cgxe_LmvVHdFbVZCYgULAbIdBRF_BuildInfoUpdate(void);
    plhs[0] = cgxe_LmvVHdFbVZCYgULAbIdBRF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "wSmHvr4BhcFqXzUsO6nhwC") == 0) {
    extern mxArray *cgxe_wSmHvr4BhcFqXzUsO6nhwC_BuildInfoUpdate(void);
    plhs[0] = cgxe_wSmHvr4BhcFqXzUsO6nhwC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "q2CMdBQwo7C2ONb2aREl4") == 0) {
    extern mxArray *cgxe_q2CMdBQwo7C2ONb2aREl4_BuildInfoUpdate(void);
    plhs[0] = cgxe_q2CMdBQwo7C2ONb2aREl4_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "BUi44WLECWKNtu26g8w0xF") == 0) {
    extern mxArray *cgxe_BUi44WLECWKNtu26g8w0xF_fallback_info(void);
    plhs[0] = cgxe_BUi44WLECWKNtu26g8w0xF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "ThQHiJhvPXdtU7oOZUkdrB") == 0) {
    extern mxArray *cgxe_ThQHiJhvPXdtU7oOZUkdrB_fallback_info(void);
    plhs[0] = cgxe_ThQHiJhvPXdtU7oOZUkdrB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "7d7eSkxBwiXHOOXhwabJcC") == 0) {
    extern mxArray *cgxe_7d7eSkxBwiXHOOXhwabJcC_fallback_info(void);
    plhs[0] = cgxe_7d7eSkxBwiXHOOXhwabJcC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "jpN4V8nRBZ19Qo0HM1C1cB") == 0) {
    extern mxArray *cgxe_jpN4V8nRBZ19Qo0HM1C1cB_fallback_info(void);
    plhs[0] = cgxe_jpN4V8nRBZ19Qo0HM1C1cB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "Ge0LVOj0qhOJUqINmJZqjG") == 0) {
    extern mxArray *cgxe_Ge0LVOj0qhOJUqINmJZqjG_fallback_info(void);
    plhs[0] = cgxe_Ge0LVOj0qhOJUqINmJZqjG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "l6WNEwegbe6ekuo8EkOKJB") == 0) {
    extern mxArray *cgxe_l6WNEwegbe6ekuo8EkOKJB_fallback_info(void);
    plhs[0] = cgxe_l6WNEwegbe6ekuo8EkOKJB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "LmvVHdFbVZCYgULAbIdBRF") == 0) {
    extern mxArray *cgxe_LmvVHdFbVZCYgULAbIdBRF_fallback_info(void);
    plhs[0] = cgxe_LmvVHdFbVZCYgULAbIdBRF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "wSmHvr4BhcFqXzUsO6nhwC") == 0) {
    extern mxArray *cgxe_wSmHvr4BhcFqXzUsO6nhwC_fallback_info(void);
    plhs[0] = cgxe_wSmHvr4BhcFqXzUsO6nhwC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "q2CMdBQwo7C2ONb2aREl4") == 0) {
    extern mxArray *cgxe_q2CMdBQwo7C2ONb2aREl4_fallback_info(void);
    plhs[0] = cgxe_q2CMdBQwo7C2ONb2aREl4_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"
