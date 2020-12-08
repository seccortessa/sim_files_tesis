#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                Monitor_cgxe
#include "simstruc.h"
#include "Monitor_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_Monitor_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  checksumData[0] = 621225985;
  checksumData[1] = 1061948810;
  checksumData[2] = 826504553;
  checksumData[3] = 3296943317;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1379581886;
  checksumData[1] = 2276166546;
  checksumData[2] = 3591426827;
  checksumData[3] = 2751361619;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1460102360;
  checksumData[1] = 3941278400;
  checksumData[2] = 116280974;
  checksumData[3] = 3758872328;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1520658199;
  checksumData[1] = 2029980332;
  checksumData[2] = 3772254907;
  checksumData[3] = 687082909;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2084841521;
  checksumData[1] = 2246391394;
  checksumData[2] = 64461646;
  checksumData[3] = 3459181091;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2257992740;
  checksumData[1] = 3931547584;
  checksumData[2] = 2518194964;
  checksumData[3] = 1027247333;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2493652564;
  checksumData[1] = 4097180329;
  checksumData[2] = 939847702;
  checksumData[3] = 1962851430;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3211765965;
  checksumData[1] = 3513815450;
  checksumData[2] = 1984844434;
  checksumData[3] = 3564374023;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3713649402;
  checksumData[1] = 1002324211;
  checksumData[2] = 2582518620;
  checksumData[3] = 2435619151;
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
    checksumData[0] = 2717549681;
    checksumData[1] = 3694571909;
    checksumData[2] = 1821555759;
    checksumData[3] = 3728361121;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 1183923853;
    checksumData[1] = 952914430;
    checksumData[2] = 2941660750;
    checksumData[3] = 3726328048;
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
    checksumData[0] = 4058482867;
    checksumData[1] = 2838739830;
    checksumData[2] = 1066898148;
    checksumData[3] = 2250865526;
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
  success = cgxe_Monitor_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
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
  success = cgxe_Monitor_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
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
  if (strcmp(tpChksum, "K9AeZupfj9lCdYMneE92cD") == 0) {
    extern mxArray *cgxe_K9AeZupfj9lCdYMneE92cD_BuildInfoUpdate(void);
    plhs[0] = cgxe_K9AeZupfj9lCdYMneE92cD_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "5dVl3FakxCN1YJKSKTmBHC") == 0) {
    extern mxArray *cgxe_5dVl3FakxCN1YJKSKTmBHC_BuildInfoUpdate(void);
    plhs[0] = cgxe_5dVl3FakxCN1YJKSKTmBHC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "Yb0k5tbWJqIIl1OG9iLeqB") == 0) {
    extern mxArray *cgxe_Yb0k5tbWJqIIl1OG9iLeqB_BuildInfoUpdate(void);
    plhs[0] = cgxe_Yb0k5tbWJqIIl1OG9iLeqB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "IcFkfYoWKJmT8lCKw5pH7G") == 0) {
    extern mxArray *cgxe_IcFkfYoWKJmT8lCKw5pH7G_BuildInfoUpdate(void);
    plhs[0] = cgxe_IcFkfYoWKJmT8lCKw5pH7G_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "glBEXo6Iuys41qDJRNMLSB") == 0) {
    extern mxArray *cgxe_glBEXo6Iuys41qDJRNMLSB_BuildInfoUpdate(void);
    plhs[0] = cgxe_glBEXo6Iuys41qDJRNMLSB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "wKg1jm3DWO1psEO2Fu8B3B") == 0) {
    extern mxArray *cgxe_wKg1jm3DWO1psEO2Fu8B3B_BuildInfoUpdate(void);
    plhs[0] = cgxe_wKg1jm3DWO1psEO2Fu8B3B_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "9ispRWRowcT7MDgt3HGJHD") == 0) {
    extern mxArray *cgxe_9ispRWRowcT7MDgt3HGJHD_BuildInfoUpdate(void);
    plhs[0] = cgxe_9ispRWRowcT7MDgt3HGJHD_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "b79xXLEMXEdbFJyYWqzLE") == 0) {
    extern mxArray *cgxe_b79xXLEMXEdbFJyYWqzLE_BuildInfoUpdate(void);
    plhs[0] = cgxe_b79xXLEMXEdbFJyYWqzLE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "sp7vbxTFSrwaInV5uegPKG") == 0) {
    extern mxArray *cgxe_sp7vbxTFSrwaInV5uegPKG_BuildInfoUpdate(void);
    plhs[0] = cgxe_sp7vbxTFSrwaInV5uegPKG_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "K9AeZupfj9lCdYMneE92cD") == 0) {
    extern mxArray *cgxe_K9AeZupfj9lCdYMneE92cD_fallback_info(void);
    plhs[0] = cgxe_K9AeZupfj9lCdYMneE92cD_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "5dVl3FakxCN1YJKSKTmBHC") == 0) {
    extern mxArray *cgxe_5dVl3FakxCN1YJKSKTmBHC_fallback_info(void);
    plhs[0] = cgxe_5dVl3FakxCN1YJKSKTmBHC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "Yb0k5tbWJqIIl1OG9iLeqB") == 0) {
    extern mxArray *cgxe_Yb0k5tbWJqIIl1OG9iLeqB_fallback_info(void);
    plhs[0] = cgxe_Yb0k5tbWJqIIl1OG9iLeqB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "IcFkfYoWKJmT8lCKw5pH7G") == 0) {
    extern mxArray *cgxe_IcFkfYoWKJmT8lCKw5pH7G_fallback_info(void);
    plhs[0] = cgxe_IcFkfYoWKJmT8lCKw5pH7G_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "glBEXo6Iuys41qDJRNMLSB") == 0) {
    extern mxArray *cgxe_glBEXo6Iuys41qDJRNMLSB_fallback_info(void);
    plhs[0] = cgxe_glBEXo6Iuys41qDJRNMLSB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "wKg1jm3DWO1psEO2Fu8B3B") == 0) {
    extern mxArray *cgxe_wKg1jm3DWO1psEO2Fu8B3B_fallback_info(void);
    plhs[0] = cgxe_wKg1jm3DWO1psEO2Fu8B3B_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "9ispRWRowcT7MDgt3HGJHD") == 0) {
    extern mxArray *cgxe_9ispRWRowcT7MDgt3HGJHD_fallback_info(void);
    plhs[0] = cgxe_9ispRWRowcT7MDgt3HGJHD_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "b79xXLEMXEdbFJyYWqzLE") == 0) {
    extern mxArray *cgxe_b79xXLEMXEdbFJyYWqzLE_fallback_info(void);
    plhs[0] = cgxe_b79xXLEMXEdbFJyYWqzLE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "sp7vbxTFSrwaInV5uegPKG") == 0) {
    extern mxArray *cgxe_sp7vbxTFSrwaInV5uegPKG_fallback_info(void);
    plhs[0] = cgxe_sp7vbxTFSrwaInV5uegPKG_fallback_info();
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
