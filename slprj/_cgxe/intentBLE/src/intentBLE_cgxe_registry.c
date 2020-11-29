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
  mxArray* mxModules = mxCreateCellMatrix(10, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 63401775;
  checksumData[1] = 755741899;
  checksumData[2] = 1918999570;
  checksumData[3] = 4213268626;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 211097353;
  checksumData[1] = 4112417406;
  checksumData[2] = 3747644937;
  checksumData[3] = 1922146988;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 462836751;
  checksumData[1] = 1611513361;
  checksumData[2] = 1535888829;
  checksumData[3] = 807499719;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 712895989;
  checksumData[1] = 3862688309;
  checksumData[2] = 1354596559;
  checksumData[3] = 12132110;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1804280800;
  checksumData[1] = 4293408378;
  checksumData[2] = 2893196117;
  checksumData[3] = 1818558887;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2653426053;
  checksumData[1] = 851106686;
  checksumData[2] = 3578638948;
  checksumData[3] = 4035736329;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3103179904;
  checksumData[1] = 812568035;
  checksumData[2] = 1479877289;
  checksumData[3] = 2098394393;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3432877810;
  checksumData[1] = 1626063651;
  checksumData[2] = 4268044167;
  checksumData[3] = 862389229;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3733578806;
  checksumData[1] = 491274360;
  checksumData[2] = 3471219275;
  checksumData[3] = 1052997962;
  mxSetCell(mxModules, 8, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 4222645197;
  checksumData[1] = 2639138121;
  checksumData[2] = 2420096978;
  checksumData[3] = 2840022155;
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
    checksumData[0] = 2593340895;
    checksumData[1] = 1521146453;
    checksumData[2] = 609768301;
    checksumData[3] = 3912073356;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 168246111;
    checksumData[1] = 4028247045;
    checksumData[2] = 2921950251;
    checksumData[3] = 2322743789;
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
    checksumData[0] = 2843906191;
    checksumData[1] = 1240116313;
    checksumData[2] = 1069687790;
    checksumData[3] = 2037758529;
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
  if (strcmp(tpChksum, "dJ4YM46kKnpUfxxQH6dtXE") == 0) {
    extern mxArray *cgxe_dJ4YM46kKnpUfxxQH6dtXE_BuildInfoUpdate(void);
    plhs[0] = cgxe_dJ4YM46kKnpUfxxQH6dtXE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "D5hUAv1FSKEiOVVgOUx7lH") == 0) {
    extern mxArray *cgxe_D5hUAv1FSKEiOVVgOUx7lH_BuildInfoUpdate(void);
    plhs[0] = cgxe_D5hUAv1FSKEiOVVgOUx7lH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "iOoY8TrkNJf30SdaXtCZNG") == 0) {
    extern mxArray *cgxe_iOoY8TrkNJf30SdaXtCZNG_BuildInfoUpdate(void);
    plhs[0] = cgxe_iOoY8TrkNJf30SdaXtCZNG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "cjmwW9EpMQg0K6b1o0DXNH") == 0) {
    extern mxArray *cgxe_cjmwW9EpMQg0K6b1o0DXNH_BuildInfoUpdate(void);
    plhs[0] = cgxe_cjmwW9EpMQg0K6b1o0DXNH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "2GvInKXxGDWd0XSPaKJUhC") == 0) {
    extern mxArray *cgxe_2GvInKXxGDWd0XSPaKJUhC_BuildInfoUpdate(void);
    plhs[0] = cgxe_2GvInKXxGDWd0XSPaKJUhC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "o0P6MdIe6y5bpuoGxo1aVB") == 0) {
    extern mxArray *cgxe_o0P6MdIe6y5bpuoGxo1aVB_BuildInfoUpdate(void);
    plhs[0] = cgxe_o0P6MdIe6y5bpuoGxo1aVB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "uCvIkcwQXT8LoN3BG5L33F") == 0) {
    extern mxArray *cgxe_uCvIkcwQXT8LoN3BG5L33F_BuildInfoUpdate(void);
    plhs[0] = cgxe_uCvIkcwQXT8LoN3BG5L33F_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "tBvFYVguqurYjzEugxBzXE") == 0) {
    extern mxArray *cgxe_tBvFYVguqurYjzEugxBzXE_BuildInfoUpdate(void);
    plhs[0] = cgxe_tBvFYVguqurYjzEugxBzXE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "A2JuLCNyadrWVSG5JjTEC") == 0) {
    extern mxArray *cgxe_A2JuLCNyadrWVSG5JjTEC_BuildInfoUpdate(void);
    plhs[0] = cgxe_A2JuLCNyadrWVSG5JjTEC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "MEyKfWKBqc5ZHNBdTH37FG") == 0) {
    extern mxArray *cgxe_MEyKfWKBqc5ZHNBdTH37FG_BuildInfoUpdate(void);
    plhs[0] = cgxe_MEyKfWKBqc5ZHNBdTH37FG_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "dJ4YM46kKnpUfxxQH6dtXE") == 0) {
    extern mxArray *cgxe_dJ4YM46kKnpUfxxQH6dtXE_fallback_info(void);
    plhs[0] = cgxe_dJ4YM46kKnpUfxxQH6dtXE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "D5hUAv1FSKEiOVVgOUx7lH") == 0) {
    extern mxArray *cgxe_D5hUAv1FSKEiOVVgOUx7lH_fallback_info(void);
    plhs[0] = cgxe_D5hUAv1FSKEiOVVgOUx7lH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "iOoY8TrkNJf30SdaXtCZNG") == 0) {
    extern mxArray *cgxe_iOoY8TrkNJf30SdaXtCZNG_fallback_info(void);
    plhs[0] = cgxe_iOoY8TrkNJf30SdaXtCZNG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "cjmwW9EpMQg0K6b1o0DXNH") == 0) {
    extern mxArray *cgxe_cjmwW9EpMQg0K6b1o0DXNH_fallback_info(void);
    plhs[0] = cgxe_cjmwW9EpMQg0K6b1o0DXNH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "2GvInKXxGDWd0XSPaKJUhC") == 0) {
    extern mxArray *cgxe_2GvInKXxGDWd0XSPaKJUhC_fallback_info(void);
    plhs[0] = cgxe_2GvInKXxGDWd0XSPaKJUhC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "o0P6MdIe6y5bpuoGxo1aVB") == 0) {
    extern mxArray *cgxe_o0P6MdIe6y5bpuoGxo1aVB_fallback_info(void);
    plhs[0] = cgxe_o0P6MdIe6y5bpuoGxo1aVB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "uCvIkcwQXT8LoN3BG5L33F") == 0) {
    extern mxArray *cgxe_uCvIkcwQXT8LoN3BG5L33F_fallback_info(void);
    plhs[0] = cgxe_uCvIkcwQXT8LoN3BG5L33F_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "tBvFYVguqurYjzEugxBzXE") == 0) {
    extern mxArray *cgxe_tBvFYVguqurYjzEugxBzXE_fallback_info(void);
    plhs[0] = cgxe_tBvFYVguqurYjzEugxBzXE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "A2JuLCNyadrWVSG5JjTEC") == 0) {
    extern mxArray *cgxe_A2JuLCNyadrWVSG5JjTEC_fallback_info(void);
    plhs[0] = cgxe_A2JuLCNyadrWVSG5JjTEC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "MEyKfWKBqc5ZHNBdTH37FG") == 0) {
    extern mxArray *cgxe_MEyKfWKBqc5ZHNBdTH37FG_fallback_info(void);
    plhs[0] = cgxe_MEyKfWKBqc5ZHNBdTH37FG_fallback_info();
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
