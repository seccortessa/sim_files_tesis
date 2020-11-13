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
  mxArray* mxModules = mxCreateCellMatrix(11, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 21182351;
  checksumData[1] = 4224131639;
  checksumData[2] = 2494754714;
  checksumData[3] = 1127174284;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 222519087;
  checksumData[1] = 3818884895;
  checksumData[2] = 3635753014;
  checksumData[3] = 2135253952;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 254450365;
  checksumData[1] = 1473859210;
  checksumData[2] = 1695699478;
  checksumData[3] = 3551658163;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 915524568;
  checksumData[1] = 645109393;
  checksumData[2] = 3642275224;
  checksumData[3] = 3479749011;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1312943521;
  checksumData[1] = 1368915616;
  checksumData[2] = 291008464;
  checksumData[3] = 392815120;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1441176752;
  checksumData[1] = 1335006707;
  checksumData[2] = 1248038116;
  checksumData[3] = 818500451;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2422463592;
  checksumData[1] = 1799472185;
  checksumData[2] = 3273050726;
  checksumData[3] = 3679694306;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3001052545;
  checksumData[1] = 1615218595;
  checksumData[2] = 182290380;
  checksumData[3] = 2336078263;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3025607194;
  checksumData[1] = 3464022314;
  checksumData[2] = 2323754876;
  checksumData[3] = 4242184727;
  mxSetCell(mxModules, 8, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3562735693;
  checksumData[1] = 2756224494;
  checksumData[2] = 3534557469;
  checksumData[3] = 3416564271;
  mxSetCell(mxModules, 9, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 4062790649;
  checksumData[1] = 883475760;
  checksumData[2] = 2804624825;
  checksumData[3] = 2745761468;
  mxSetCell(mxModules, 10, mxChksum);
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
    checksumData[0] = 1519031131;
    checksumData[1] = 2646517230;
    checksumData[2] = 3802684819;
    checksumData[3] = 892685035;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 723038097;
    checksumData[1] = 2390137739;
    checksumData[2] = 1664359801;
    checksumData[3] = 4204167594;
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
    checksumData[0] = 1449414340;
    checksumData[1] = 3122635447;
    checksumData[2] = 976257073;
    checksumData[3] = 2150062340;
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
  if (strcmp(tpChksum, "RHDQrIaXNsZ5JtX4Xo2HNF") == 0) {
    extern mxArray *cgxe_RHDQrIaXNsZ5JtX4Xo2HNF_BuildInfoUpdate(void);
    plhs[0] = cgxe_RHDQrIaXNsZ5JtX4Xo2HNF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "jy2tIwPoe1s8ALTGgdhz0") == 0) {
    extern mxArray *cgxe_jy2tIwPoe1s8ALTGgdhz0_BuildInfoUpdate(void);
    plhs[0] = cgxe_jy2tIwPoe1s8ALTGgdhz0_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "RoCtFZqzoy2MuRSqhBv9HC") == 0) {
    extern mxArray *cgxe_RoCtFZqzoy2MuRSqhBv9HC_BuildInfoUpdate(void);
    plhs[0] = cgxe_RoCtFZqzoy2MuRSqhBv9HC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "y6O8KIgBCp7z8C6UHAgzZF") == 0) {
    extern mxArray *cgxe_y6O8KIgBCp7z8C6UHAgzZF_BuildInfoUpdate(void);
    plhs[0] = cgxe_y6O8KIgBCp7z8C6UHAgzZF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "s1jvAIR8zQOwHmXL0DtSMF") == 0) {
    extern mxArray *cgxe_s1jvAIR8zQOwHmXL0DtSMF_BuildInfoUpdate(void);
    plhs[0] = cgxe_s1jvAIR8zQOwHmXL0DtSMF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "SeDOQ8l2qZzhyrMZllF0aG") == 0) {
    extern mxArray *cgxe_SeDOQ8l2qZzhyrMZllF0aG_BuildInfoUpdate(void);
    plhs[0] = cgxe_SeDOQ8l2qZzhyrMZllF0aG_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "MvgkiIuLAQahlZOS1xpPhH") == 0) {
    extern mxArray *cgxe_MvgkiIuLAQahlZOS1xpPhH_BuildInfoUpdate(void);
    plhs[0] = cgxe_MvgkiIuLAQahlZOS1xpPhH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "C75W88Xu8Lfy30u4v8RD7") == 0) {
    extern mxArray *cgxe_C75W88Xu8Lfy30u4v8RD7_BuildInfoUpdate(void);
    plhs[0] = cgxe_C75W88Xu8Lfy30u4v8RD7_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "2A1lCNxHIbRhU98NaiTyUD") == 0) {
    extern mxArray *cgxe_2A1lCNxHIbRhU98NaiTyUD_BuildInfoUpdate(void);
    plhs[0] = cgxe_2A1lCNxHIbRhU98NaiTyUD_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "24nS964txOkzyQmAGW8uHH") == 0) {
    extern mxArray *cgxe_24nS964txOkzyQmAGW8uHH_BuildInfoUpdate(void);
    plhs[0] = cgxe_24nS964txOkzyQmAGW8uHH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "52XttFIibJYaIcbOjnV5eB") == 0) {
    extern mxArray *cgxe_52XttFIibJYaIcbOjnV5eB_BuildInfoUpdate(void);
    plhs[0] = cgxe_52XttFIibJYaIcbOjnV5eB_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "RHDQrIaXNsZ5JtX4Xo2HNF") == 0) {
    extern mxArray *cgxe_RHDQrIaXNsZ5JtX4Xo2HNF_fallback_info(void);
    plhs[0] = cgxe_RHDQrIaXNsZ5JtX4Xo2HNF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "jy2tIwPoe1s8ALTGgdhz0") == 0) {
    extern mxArray *cgxe_jy2tIwPoe1s8ALTGgdhz0_fallback_info(void);
    plhs[0] = cgxe_jy2tIwPoe1s8ALTGgdhz0_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "RoCtFZqzoy2MuRSqhBv9HC") == 0) {
    extern mxArray *cgxe_RoCtFZqzoy2MuRSqhBv9HC_fallback_info(void);
    plhs[0] = cgxe_RoCtFZqzoy2MuRSqhBv9HC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "y6O8KIgBCp7z8C6UHAgzZF") == 0) {
    extern mxArray *cgxe_y6O8KIgBCp7z8C6UHAgzZF_fallback_info(void);
    plhs[0] = cgxe_y6O8KIgBCp7z8C6UHAgzZF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "s1jvAIR8zQOwHmXL0DtSMF") == 0) {
    extern mxArray *cgxe_s1jvAIR8zQOwHmXL0DtSMF_fallback_info(void);
    plhs[0] = cgxe_s1jvAIR8zQOwHmXL0DtSMF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "SeDOQ8l2qZzhyrMZllF0aG") == 0) {
    extern mxArray *cgxe_SeDOQ8l2qZzhyrMZllF0aG_fallback_info(void);
    plhs[0] = cgxe_SeDOQ8l2qZzhyrMZllF0aG_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "MvgkiIuLAQahlZOS1xpPhH") == 0) {
    extern mxArray *cgxe_MvgkiIuLAQahlZOS1xpPhH_fallback_info(void);
    plhs[0] = cgxe_MvgkiIuLAQahlZOS1xpPhH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "C75W88Xu8Lfy30u4v8RD7") == 0) {
    extern mxArray *cgxe_C75W88Xu8Lfy30u4v8RD7_fallback_info(void);
    plhs[0] = cgxe_C75W88Xu8Lfy30u4v8RD7_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "2A1lCNxHIbRhU98NaiTyUD") == 0) {
    extern mxArray *cgxe_2A1lCNxHIbRhU98NaiTyUD_fallback_info(void);
    plhs[0] = cgxe_2A1lCNxHIbRhU98NaiTyUD_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "24nS964txOkzyQmAGW8uHH") == 0) {
    extern mxArray *cgxe_24nS964txOkzyQmAGW8uHH_fallback_info(void);
    plhs[0] = cgxe_24nS964txOkzyQmAGW8uHH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "52XttFIibJYaIcbOjnV5eB") == 0) {
    extern mxArray *cgxe_52XttFIibJYaIcbOjnV5eB_fallback_info(void);
    plhs[0] = cgxe_52XttFIibJYaIcbOjnV5eB_fallback_info();
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
