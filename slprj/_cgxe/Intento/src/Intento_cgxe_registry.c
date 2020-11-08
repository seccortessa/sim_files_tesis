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
  mxArray* mxModules = mxCreateCellMatrix(10, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 52161951;
  checksumData[1] = 1186897146;
  checksumData[2] = 263557893;
  checksumData[3] = 839966381;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 668829270;
  checksumData[1] = 2326741253;
  checksumData[2] = 3343067032;
  checksumData[3] = 1555446123;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 879638896;
  checksumData[1] = 4123533670;
  checksumData[2] = 3768336585;
  checksumData[3] = 3547826617;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1020894022;
  checksumData[1] = 2726993822;
  checksumData[2] = 1721255239;
  checksumData[3] = 481454015;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1293305139;
  checksumData[1] = 156958220;
  checksumData[2] = 106888884;
  checksumData[3] = 2843886952;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1346597635;
  checksumData[1] = 2564772499;
  checksumData[2] = 2584837700;
  checksumData[3] = 3627177549;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1957879245;
  checksumData[1] = 2439806734;
  checksumData[2] = 1531590812;
  checksumData[3] = 2782816302;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2276030215;
  checksumData[1] = 3384078629;
  checksumData[2] = 1227546996;
  checksumData[3] = 2948986103;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2526762897;
  checksumData[1] = 1619220846;
  checksumData[2] = 3245090498;
  checksumData[3] = 1338527540;
  mxSetCell(mxModules, 8, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3247823203;
  checksumData[1] = 4131564688;
  checksumData[2] = 1481312307;
  checksumData[3] = 127213554;
  mxSetCell(mxModules, 9, mxChksum);
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
    checksumData[0] = 705523542;
    checksumData[1] = 959417156;
    checksumData[2] = 1384894494;
    checksumData[3] = 2934099520;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 1707271222;
    checksumData[1] = 1316471808;
    checksumData[2] = 743203397;
    checksumData[3] = 764172561;
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
    checksumData[0] = 3931476794;
    checksumData[1] = 1424025655;
    checksumData[2] = 4193952754;
    checksumData[3] = 1218603741;
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
  if (strcmp(tpChksum, "iTFOlP72EQVncjg9lot8NC") == 0) {
    extern mxArray *cgxe_iTFOlP72EQVncjg9lot8NC_BuildInfoUpdate(void);
    plhs[0] = cgxe_iTFOlP72EQVncjg9lot8NC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "jGOk58F2EItWQQyZr1fvQH") == 0) {
    extern mxArray *cgxe_jGOk58F2EItWQQyZr1fvQH_BuildInfoUpdate(void);
    plhs[0] = cgxe_jGOk58F2EItWQQyZr1fvQH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "qx6tijP9Pz4EqNvVYLTKEC") == 0) {
    extern mxArray *cgxe_qx6tijP9Pz4EqNvVYLTKEC_BuildInfoUpdate(void);
    plhs[0] = cgxe_qx6tijP9Pz4EqNvVYLTKEC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "ThQHiJhvPXdtU7oOZUkdrB") == 0) {
    extern mxArray *cgxe_ThQHiJhvPXdtU7oOZUkdrB_BuildInfoUpdate(void);
    plhs[0] = cgxe_ThQHiJhvPXdtU7oOZUkdrB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "nAgtymYSETBDkPijv7ti1B") == 0) {
    extern mxArray *cgxe_nAgtymYSETBDkPijv7ti1B_BuildInfoUpdate(void);
    plhs[0] = cgxe_nAgtymYSETBDkPijv7ti1B_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "IqYaNNnWosp7OTOLLjzOVG") == 0) {
    extern mxArray *cgxe_IqYaNNnWosp7OTOLLjzOVG_BuildInfoUpdate(void);
    plhs[0] = cgxe_IqYaNNnWosp7OTOLLjzOVG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "QAYfRqeuGEcgexoLSTJDb") == 0) {
    extern mxArray *cgxe_QAYfRqeuGEcgexoLSTJDb_BuildInfoUpdate(void);
    plhs[0] = cgxe_QAYfRqeuGEcgexoLSTJDb_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "TnC2Qc2sAjgPwWshVdxVFH") == 0) {
    extern mxArray *cgxe_TnC2Qc2sAjgPwWshVdxVFH_BuildInfoUpdate(void);
    plhs[0] = cgxe_TnC2Qc2sAjgPwWshVdxVFH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "2C2HHdaK4LuDYNZ6L5nu9B") == 0) {
    extern mxArray *cgxe_2C2HHdaK4LuDYNZ6L5nu9B_BuildInfoUpdate(void);
    plhs[0] = cgxe_2C2HHdaK4LuDYNZ6L5nu9B_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "THByxAd9mjYZyPqQTAVKNC") == 0) {
    extern mxArray *cgxe_THByxAd9mjYZyPqQTAVKNC_BuildInfoUpdate(void);
    plhs[0] = cgxe_THByxAd9mjYZyPqQTAVKNC_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "iTFOlP72EQVncjg9lot8NC") == 0) {
    extern mxArray *cgxe_iTFOlP72EQVncjg9lot8NC_fallback_info(void);
    plhs[0] = cgxe_iTFOlP72EQVncjg9lot8NC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "jGOk58F2EItWQQyZr1fvQH") == 0) {
    extern mxArray *cgxe_jGOk58F2EItWQQyZr1fvQH_fallback_info(void);
    plhs[0] = cgxe_jGOk58F2EItWQQyZr1fvQH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "qx6tijP9Pz4EqNvVYLTKEC") == 0) {
    extern mxArray *cgxe_qx6tijP9Pz4EqNvVYLTKEC_fallback_info(void);
    plhs[0] = cgxe_qx6tijP9Pz4EqNvVYLTKEC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "ThQHiJhvPXdtU7oOZUkdrB") == 0) {
    extern mxArray *cgxe_ThQHiJhvPXdtU7oOZUkdrB_fallback_info(void);
    plhs[0] = cgxe_ThQHiJhvPXdtU7oOZUkdrB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "nAgtymYSETBDkPijv7ti1B") == 0) {
    extern mxArray *cgxe_nAgtymYSETBDkPijv7ti1B_fallback_info(void);
    plhs[0] = cgxe_nAgtymYSETBDkPijv7ti1B_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "IqYaNNnWosp7OTOLLjzOVG") == 0) {
    extern mxArray *cgxe_IqYaNNnWosp7OTOLLjzOVG_fallback_info(void);
    plhs[0] = cgxe_IqYaNNnWosp7OTOLLjzOVG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "QAYfRqeuGEcgexoLSTJDb") == 0) {
    extern mxArray *cgxe_QAYfRqeuGEcgexoLSTJDb_fallback_info(void);
    plhs[0] = cgxe_QAYfRqeuGEcgexoLSTJDb_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "TnC2Qc2sAjgPwWshVdxVFH") == 0) {
    extern mxArray *cgxe_TnC2Qc2sAjgPwWshVdxVFH_fallback_info(void);
    plhs[0] = cgxe_TnC2Qc2sAjgPwWshVdxVFH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "2C2HHdaK4LuDYNZ6L5nu9B") == 0) {
    extern mxArray *cgxe_2C2HHdaK4LuDYNZ6L5nu9B_fallback_info(void);
    plhs[0] = cgxe_2C2HHdaK4LuDYNZ6L5nu9B_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "THByxAd9mjYZyPqQTAVKNC") == 0) {
    extern mxArray *cgxe_THByxAd9mjYZyPqQTAVKNC_fallback_info(void);
    plhs[0] = cgxe_THByxAd9mjYZyPqQTAVKNC_fallback_info();
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
