/*
 * driver_android_button.c
 *
 * Driver code
 *
 * Copyright 2013-2017 The MathWorks, Inc.
 */
#include <jni.h>
#include <stdlib.h>
#include <android/log.h>

extern JavaVM *cachedJvm;
extern jobject cachedActivityObj;
extern jclass cachedMainActivityCls;
static jmethodID sgRegButtonID, sgGetButtonID;

void initButton(int id)
{
    JNIEnv *pEnv;
    (*cachedJvm)->AttachCurrentThread(cachedJvm, &pEnv, NULL);
    
    sgRegButtonID = (*pEnv)->GetMethodID(pEnv, cachedMainActivityCls, "registerButtonFcn","(I)V");
    if ((*pEnv)->ExceptionCheck(pEnv)) {
        __android_log_write(ANDROID_LOG_ERROR, "driver_android_button",
                            "Exception: on getting method id for registerButtonFcn.");
        (*pEnv)->ExceptionDescribe(pEnv);
        (*pEnv)->ExceptionClear(pEnv);
    }
    
    sgGetButtonID = (*pEnv)->GetMethodID(pEnv, cachedMainActivityCls, "getButtonState","(I)F");
    if ((*pEnv)->ExceptionCheck(pEnv)) {
        __android_log_write(ANDROID_LOG_ERROR, "driver_android_button",
                            "Exception: on getting method id for getButtonState.");
        (*pEnv)->ExceptionDescribe(pEnv);
        (*pEnv)->ExceptionClear(pEnv);
    }
    
    if (sgRegButtonID == NULL)
        return; /* registerButtonFcn method not found */
    
    (*pEnv)->CallVoidMethod(pEnv, cachedActivityObj, sgRegButtonID,id);
    // Clear exception if any, so user can proceed
    if ((*pEnv)->ExceptionCheck(pEnv)) {
        __android_log_write(ANDROID_LOG_ERROR, "driver_android_button",
                            "Exception: on calling void method registerButtonFcn.");
        (*pEnv)->ExceptionDescribe(pEnv);
        (*pEnv)->ExceptionClear(pEnv);
    }
}


float getButtonState(int id)
{
    if (sgGetButtonID != NULL)
    {
        JNIEnv *pEnv;
        jfloat value;        
        
        (*cachedJvm)->AttachCurrentThread(cachedJvm, &pEnv, NULL);
        value = (jfloat)(*pEnv)->CallFloatMethod(pEnv, cachedActivityObj, sgGetButtonID,id);       
        // Clear exception if any, so user can proceed
        if ((*pEnv)->ExceptionCheck(pEnv)) {
            __android_log_write(ANDROID_LOG_ERROR, "driver_android_button",
                                "Exception: on calling void method getButtonState.");
            (*pEnv)->ExceptionDescribe(pEnv);
            (*pEnv)->ExceptionClear(pEnv);
            value = 0;
        }
        
        return value;
    }
}

void terminateButton()
{
}