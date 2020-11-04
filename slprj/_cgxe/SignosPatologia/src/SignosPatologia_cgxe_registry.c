#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                SignosPatologia_cgxe
#include "simstruc.h"
#include "SignosPatologia_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_SignosPatologia_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  mxArray* mxModules = mxCreateCellMatrix(6, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 137429461;
  checksumData[1] = 294345294;
  checksumData[2] = 3444986081;
  checksumData[3] = 1873955079;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2448586475;
  checksumData[1] = 1271394761;
  checksumData[2] = 325361542;
  checksumData[3] = 3538590340;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2674324184;
  checksumData[1] = 1332799537;
  checksumData[2] = 1749339719;
  checksumData[3] = 3495636717;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2977687752;
  checksumData[1] = 2056177492;
  checksumData[2] = 119671706;
  checksumData[3] = 993607583;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3149406295;
  checksumData[1] = 403241472;
  checksumData[2] = 1044121387;
  checksumData[3] = 2161604980;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3806425617;
  checksumData[1] = 1643069475;
  checksumData[2] = 865217725;
  checksumData[3] = 2232354195;
  mxSetCell(mxModules, 5, mxChksum);
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
    checksumData[0] = 676537084;
    checksumData[1] = 3868116115;
    checksumData[2] = 1334929263;
    checksumData[3] = 503336748;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 842026860;
    checksumData[1] = 2629594129;
    checksumData[2] = 3001526065;
    checksumData[3] = 1243219247;
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
    checksumData[0] = 4103482226;
    checksumData[1] = 2341379157;
    checksumData[2] = 1527893303;
    checksumData[3] = 3893229608;
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
  success = cgxe_SignosPatologia_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE,
    (void *) (plhs));
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
  success = cgxe_SignosPatologia_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE,
    (void *) prhs[2]);
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
  if (strcmp(tpChksum, "jdGGvS3Rnz7QCJoveIMzxF") == 0) {
    extern mxArray *cgxe_jdGGvS3Rnz7QCJoveIMzxF_BuildInfoUpdate(void);
    plhs[0] = cgxe_jdGGvS3Rnz7QCJoveIMzxF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "cYOAWMEvdMf2Or2Gk75wi") == 0) {
    extern mxArray *cgxe_cYOAWMEvdMf2Or2Gk75wi_BuildInfoUpdate(void);
    plhs[0] = cgxe_cYOAWMEvdMf2Or2Gk75wi_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "qVU1wpLpVqNPxIo6YD2XfH") == 0) {
    extern mxArray *cgxe_qVU1wpLpVqNPxIo6YD2XfH_BuildInfoUpdate(void);
    plhs[0] = cgxe_qVU1wpLpVqNPxIo6YD2XfH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "eZpB8QET6W2Wqbio119w9F") == 0) {
    extern mxArray *cgxe_eZpB8QET6W2Wqbio119w9F_BuildInfoUpdate(void);
    plhs[0] = cgxe_eZpB8QET6W2Wqbio119w9F_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "Tz3kuOhgyU1XSwtEbltTnF") == 0) {
    extern mxArray *cgxe_Tz3kuOhgyU1XSwtEbltTnF_BuildInfoUpdate(void);
    plhs[0] = cgxe_Tz3kuOhgyU1XSwtEbltTnF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "eOwhERlrSfLIP5fIwtHmQG") == 0) {
    extern mxArray *cgxe_eOwhERlrSfLIP5fIwtHmQG_BuildInfoUpdate(void);
    plhs[0] = cgxe_eOwhERlrSfLIP5fIwtHmQG_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "jdGGvS3Rnz7QCJoveIMzxF") == 0) {
    extern mxArray *cgxe_jdGGvS3Rnz7QCJoveIMzxF_fallback_info(void);
    plhs[0] = cgxe_jdGGvS3Rnz7QCJoveIMzxF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "cYOAWMEvdMf2Or2Gk75wi") == 0) {
    extern mxArray *cgxe_cYOAWMEvdMf2Or2Gk75wi_fallback_info(void);
    plhs[0] = cgxe_cYOAWMEvdMf2Or2Gk75wi_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "qVU1wpLpVqNPxIo6YD2XfH") == 0) {
    extern mxArray *cgxe_qVU1wpLpVqNPxIo6YD2XfH_fallback_info(void);
    plhs[0] = cgxe_qVU1wpLpVqNPxIo6YD2XfH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "eZpB8QET6W2Wqbio119w9F") == 0) {
    extern mxArray *cgxe_eZpB8QET6W2Wqbio119w9F_fallback_info(void);
    plhs[0] = cgxe_eZpB8QET6W2Wqbio119w9F_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "Tz3kuOhgyU1XSwtEbltTnF") == 0) {
    extern mxArray *cgxe_Tz3kuOhgyU1XSwtEbltTnF_fallback_info(void);
    plhs[0] = cgxe_Tz3kuOhgyU1XSwtEbltTnF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "eOwhERlrSfLIP5fIwtHmQG") == 0) {
    extern mxArray *cgxe_eOwhERlrSfLIP5fIwtHmQG_fallback_info(void);
    plhs[0] = cgxe_eOwhERlrSfLIP5fIwtHmQG_fallback_info();
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
