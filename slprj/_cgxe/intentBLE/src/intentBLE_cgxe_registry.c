#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                intentBLE_cgxe
#include "simstruc.h"
#include "intentBLE_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_intentBLE_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 378253369;
  checksumData[1] = 2426708192;
  checksumData[2] = 2978665238;
  checksumData[3] = 2420852965;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1598730809;
  checksumData[1] = 3989995462;
  checksumData[2] = 2144770841;
  checksumData[3] = 555174895;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2806492184;
  checksumData[1] = 621153619;
  checksumData[2] = 775362682;
  checksumData[3] = 1970966458;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3793101584;
  checksumData[1] = 2888317727;
  checksumData[2] = 689480455;
  checksumData[3] = 2866086312;
  mxSetCell(mxModules, 3, mxChksum);
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
    checksumData[0] = 3879399649;
    checksumData[1] = 1351605285;
    checksumData[2] = 1519177509;
    checksumData[3] = 2973075180;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3005561664;
    checksumData[1] = 906642680;
    checksumData[2] = 286505716;
    checksumData[3] = 2789370982;
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
    checksumData[0] = 2394939079;
    checksumData[1] = 3720015898;
    checksumData[2] = 3511614637;
    checksumData[3] = 4218545743;
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
  success = cgxe_intentBLE_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void
    *) (plhs));
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
  success = cgxe_intentBLE_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void
    *) prhs[2]);
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
  if (strcmp(tpChksum, "JtvwPTHe6fzHKrpCooAHa") == 0) {
    extern mxArray *cgxe_JtvwPTHe6fzHKrpCooAHa_BuildInfoUpdate(void);
    plhs[0] = cgxe_JtvwPTHe6fzHKrpCooAHa_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "zBf55hVxoG5oTnfpEp2jxG") == 0) {
    extern mxArray *cgxe_zBf55hVxoG5oTnfpEp2jxG_BuildInfoUpdate(void);
    plhs[0] = cgxe_zBf55hVxoG5oTnfpEp2jxG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "azEBpWWOSj2hcradtDhio") == 0) {
    extern mxArray *cgxe_azEBpWWOSj2hcradtDhio_BuildInfoUpdate(void);
    plhs[0] = cgxe_azEBpWWOSj2hcradtDhio_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "ziXE5IiVwYxkBv5CkuEA9D") == 0) {
    extern mxArray *cgxe_ziXE5IiVwYxkBv5CkuEA9D_BuildInfoUpdate(void);
    plhs[0] = cgxe_ziXE5IiVwYxkBv5CkuEA9D_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "JtvwPTHe6fzHKrpCooAHa") == 0) {
    extern mxArray *cgxe_JtvwPTHe6fzHKrpCooAHa_fallback_info(void);
    plhs[0] = cgxe_JtvwPTHe6fzHKrpCooAHa_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "zBf55hVxoG5oTnfpEp2jxG") == 0) {
    extern mxArray *cgxe_zBf55hVxoG5oTnfpEp2jxG_fallback_info(void);
    plhs[0] = cgxe_zBf55hVxoG5oTnfpEp2jxG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "azEBpWWOSj2hcradtDhio") == 0) {
    extern mxArray *cgxe_azEBpWWOSj2hcradtDhio_fallback_info(void);
    plhs[0] = cgxe_azEBpWWOSj2hcradtDhio_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "ziXE5IiVwYxkBv5CkuEA9D") == 0) {
    extern mxArray *cgxe_ziXE5IiVwYxkBv5CkuEA9D_fallback_info(void);
    plhs[0] = cgxe_ziXE5IiVwYxkBv5CkuEA9D_fallback_info();
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
