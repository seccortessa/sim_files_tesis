#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                celBebe_cgxe
#include "simstruc.h"
#include "celBebe_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_celBebe_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  mxArray* mxModules = mxCreateCellMatrix(7, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 195530892;
  checksumData[1] = 113830415;
  checksumData[2] = 1234181756;
  checksumData[3] = 4167853903;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 423185046;
  checksumData[1] = 1650285668;
  checksumData[2] = 898442620;
  checksumData[3] = 2619198846;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 571453994;
  checksumData[1] = 2600040780;
  checksumData[2] = 2872648160;
  checksumData[3] = 2546083833;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 868521204;
  checksumData[1] = 3204850203;
  checksumData[2] = 462053822;
  checksumData[3] = 1482703587;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1938401385;
  checksumData[1] = 1964306693;
  checksumData[2] = 1396155398;
  checksumData[3] = 2501066867;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3556373960;
  checksumData[1] = 1979121035;
  checksumData[2] = 524583230;
  checksumData[3] = 1467883277;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3657009818;
  checksumData[1] = 2042584842;
  checksumData[2] = 1474509762;
  checksumData[3] = 1944982131;
  mxSetCell(mxModules, 6, mxChksum);
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
    checksumData[0] = 1994205703;
    checksumData[1] = 991321157;
    checksumData[2] = 1091654581;
    checksumData[3] = 2449226637;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3925250366;
    checksumData[1] = 2639054989;
    checksumData[2] = 3375016105;
    checksumData[3] = 1239325001;
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
    checksumData[0] = 2596808963;
    checksumData[1] = 1525401537;
    checksumData[2] = 2928103271;
    checksumData[3] = 1595206675;
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
  success = cgxe_celBebe_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
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
  success = cgxe_celBebe_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
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
  if (strcmp(tpChksum, "PGHqiVkIzM3GqbsZrllcmB") == 0) {
    extern mxArray *cgxe_PGHqiVkIzM3GqbsZrllcmB_BuildInfoUpdate(void);
    plhs[0] = cgxe_PGHqiVkIzM3GqbsZrllcmB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "rxrUhDJ8v8GroQHXnm35hB") == 0) {
    extern mxArray *cgxe_rxrUhDJ8v8GroQHXnm35hB_BuildInfoUpdate(void);
    plhs[0] = cgxe_rxrUhDJ8v8GroQHXnm35hB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "5IOryTwORVHfrrhVni6DVF") == 0) {
    extern mxArray *cgxe_5IOryTwORVHfrrhVni6DVF_BuildInfoUpdate(void);
    plhs[0] = cgxe_5IOryTwORVHfrrhVni6DVF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "t6gfzhy2H9OHbRzISw1CpF") == 0) {
    extern mxArray *cgxe_t6gfzhy2H9OHbRzISw1CpF_BuildInfoUpdate(void);
    plhs[0] = cgxe_t6gfzhy2H9OHbRzISw1CpF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "esq8r6hCXoet8LGnEsjgw") == 0) {
    extern mxArray *cgxe_esq8r6hCXoet8LGnEsjgw_BuildInfoUpdate(void);
    plhs[0] = cgxe_esq8r6hCXoet8LGnEsjgw_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "5Nu8XxBOlRImD0lB783YvG") == 0) {
    extern mxArray *cgxe_5Nu8XxBOlRImD0lB783YvG_BuildInfoUpdate(void);
    plhs[0] = cgxe_5Nu8XxBOlRImD0lB783YvG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "txY1tResNP1bDTnjeHgAW") == 0) {
    extern mxArray *cgxe_txY1tResNP1bDTnjeHgAW_BuildInfoUpdate(void);
    plhs[0] = cgxe_txY1tResNP1bDTnjeHgAW_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "PGHqiVkIzM3GqbsZrllcmB") == 0) {
    extern mxArray *cgxe_PGHqiVkIzM3GqbsZrllcmB_fallback_info(void);
    plhs[0] = cgxe_PGHqiVkIzM3GqbsZrllcmB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "rxrUhDJ8v8GroQHXnm35hB") == 0) {
    extern mxArray *cgxe_rxrUhDJ8v8GroQHXnm35hB_fallback_info(void);
    plhs[0] = cgxe_rxrUhDJ8v8GroQHXnm35hB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "5IOryTwORVHfrrhVni6DVF") == 0) {
    extern mxArray *cgxe_5IOryTwORVHfrrhVni6DVF_fallback_info(void);
    plhs[0] = cgxe_5IOryTwORVHfrrhVni6DVF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "t6gfzhy2H9OHbRzISw1CpF") == 0) {
    extern mxArray *cgxe_t6gfzhy2H9OHbRzISw1CpF_fallback_info(void);
    plhs[0] = cgxe_t6gfzhy2H9OHbRzISw1CpF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "esq8r6hCXoet8LGnEsjgw") == 0) {
    extern mxArray *cgxe_esq8r6hCXoet8LGnEsjgw_fallback_info(void);
    plhs[0] = cgxe_esq8r6hCXoet8LGnEsjgw_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "5Nu8XxBOlRImD0lB783YvG") == 0) {
    extern mxArray *cgxe_5Nu8XxBOlRImD0lB783YvG_fallback_info(void);
    plhs[0] = cgxe_5Nu8XxBOlRImD0lB783YvG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "txY1tResNP1bDTnjeHgAW") == 0) {
    extern mxArray *cgxe_txY1tResNP1bDTnjeHgAW_fallback_info(void);
    plhs[0] = cgxe_txY1tResNP1bDTnjeHgAW_fallback_info();
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
