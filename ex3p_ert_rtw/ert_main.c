/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'ex3p'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Oct 14 22:16:41 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include <stdlib.h>
#include "ex3p.h"
#include "ex3p_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "androidinitialize.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(ex3p_M) == (NULL)) && !rtmGetStopRequested
    (ex3p_M);
  while (runModel) {
    MW_sem_wait(&baserateTaskSem);
    ex3p_step();

    /* Get model outputs here */
    stopRequested = !((rtmGetErrorStatus(ex3p_M) == (NULL)) &&
                      !rtmGetStopRequested(ex3p_M));
  }

  runModel = 0;
  terminateTask(arg);
  MW_pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(ex3p_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  my_android_terminate();

  /* Disable rt_OneStep() here */

  /* Terminate model */
  ex3p_terminate();
  MW_sem_post(&stopSem);
  return NULL;
}

jint JNICALL naMain(JNIEnv *pEnv, jobject pObj, jobjectArray pArgv, jobject
                    pMainActivity)
{
  int argc = 4;
  char *argv[4] = { "ex3p", "-w", "-port", "17725" };

  my_android_init(pEnv, pObj, pArgv, pMainActivity);
  rtmSetErrorStatus(ex3p_M, 0);

  /* Initialize model */
  ex3p_initialize();

  /* Call RTOS Initialization function */
  myRTOSInit(0.001, 0);

  /* Wait for stop semaphore */
  MW_sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(MW_sem_destroy(&timerTaskSem[i]), 0, "MW_sem_destroy");
    }
  }

#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
