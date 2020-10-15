/*
 * driver_android_datadisplay.c
 *
 * Driver code
 *
 * Copyright 2013-2016 The MathWorks, Inc.
 */
#include <jni.h>
#include <stdlib.h>
#include <string.h>
#include <android/log.h>
#include "driver_android_datadisplay.h"

extern JavaVM *cachedJvm;
extern jobject cachedActivityObj;
extern jclass cachedMainActivityCls;

void initDataDisplay()
{
    JNIEnv *pEnv;
    (*cachedJvm)->AttachCurrentThread(cachedJvm, &pEnv, NULL);
}

void putDataDisplayData(void *data,  int id, uint8_t dataType, int32_t inSize, char const *formatString)
{
    jmethodID DataDisplayDataID;
    JNIEnv *pEnv;
    char format[] = {"(I[I[B)V"};
    
    (*cachedJvm)->AttachCurrentThread(cachedJvm, &pEnv, NULL);
    switch (dataType)
    {
        case 1: /* uint8 */
        case 2: /* int8  */
            format[3] = 'B';
            break;
        case 3: /* uint16 */
        case 4: /* int16 */
            format[3] = 'S';
            break;
        case 5: /* uint32 */
        case 6: /* int32 */
            break;
        case 7: /* int64 */
            format[3] = 'J';
            break;
        case 8: /* float */
            format[3] = 'F';
            break;
        case 9: /* double */
            format[3] = 'D';
            break;
    }
    DataDisplayDataID = (*pEnv)->GetMethodID(pEnv, cachedMainActivityCls, "displayText", format);
    if ((*pEnv)->ExceptionCheck(pEnv))
    {
        __android_log_write(ANDROID_LOG_ERROR, "driver_android_datadisplay", "Exception: exception occurred on calling GetMethodID.");
        (*pEnv)->ExceptionDescribe(pEnv);
        (*pEnv)->ExceptionClear(pEnv);
        return;
    }
    
    if (DataDisplayDataID != NULL)
    {
        jarray val;
        jbyteArray stringFormatArray;
        int strLen = strlen(formatString);
        
        switch (dataType)
        {
            case 1: /* uint8 */
            case 2: /* int8  */
                val = (*pEnv)->NewByteArray(pEnv, inSize);
                (*pEnv)->SetByteArrayRegion(pEnv, val, 0, inSize, data);
                break;
            case 3: /* uint16 */
            case 4: /* int16 */
                val = (*pEnv)->NewShortArray(pEnv, inSize);
                (*pEnv)->SetShortArrayRegion(pEnv, val, 0, inSize, data);
                break;
            case 5: /* uint32 */
            case 6: /* int32 */
                val = (*pEnv)->NewIntArray(pEnv, inSize);
                (*pEnv)->SetIntArrayRegion(pEnv, val, 0, inSize, data);
                break;
            case 7: /* int64 */
                val = (*pEnv)->NewLongArray(pEnv, inSize);
                (*pEnv)->SetLongArrayRegion(pEnv, val, 0, inSize, data);
                break;
            case 8: /* float */
                val = (*pEnv)->NewFloatArray(pEnv, inSize);
                (*pEnv)->SetFloatArrayRegion(pEnv, val, 0, inSize, data);
                break;
            case 9: /* double */
                val = (*pEnv)->NewDoubleArray(pEnv, inSize);
                (*pEnv)->SetDoubleArrayRegion(pEnv, val, 0, inSize, data);
                break;
        }
        
        if ((*pEnv)->ExceptionCheck(pEnv))
        {
            __android_log_write(ANDROID_LOG_ERROR, "driver_android_datadisplay", "exception occurred on setting data array.");
            (*pEnv)->ExceptionDescribe(pEnv);
            (*pEnv)->DeleteLocalRef(pEnv, val);
            (*pEnv)->ExceptionClear(pEnv);
            return;
        }
        
        stringFormatArray = (*pEnv)->NewByteArray(pEnv, strLen);
        (*pEnv)->SetByteArrayRegion(pEnv, stringFormatArray, 0, strLen, formatString);
        
        if ((*pEnv)->ExceptionCheck(pEnv)) {
            __android_log_write(ANDROID_LOG_ERROR, "driver_android_datadisplay", "exception occurred on setting format string array.");
            (*pEnv)->ExceptionDescribe(pEnv);
            (*pEnv)->DeleteLocalRef(pEnv, val);
            (*pEnv)->DeleteLocalRef(pEnv, stringFormatArray);
            (*pEnv)->ExceptionClear(pEnv);
            return;
        }
        
        (*pEnv)->CallVoidMethod(pEnv, cachedActivityObj, DataDisplayDataID, id, val, stringFormatArray);
        
        // Clear the exception so user can proceed
        if ((*pEnv)->ExceptionCheck(pEnv)) {
            __android_log_write(ANDROID_LOG_ERROR, "driver_android_datadisplay", "Exception: exception occurred on calling CallVoidMethod.");
            (*pEnv)->ExceptionDescribe(pEnv);
            (*pEnv)->ExceptionClear(pEnv);
        }
        
        (*pEnv)->DeleteLocalRef(pEnv, val);
        (*pEnv)->DeleteLocalRef(pEnv, stringFormatArray);
    }
    else
    {
        __android_log_write(ANDROID_LOG_ERROR, "driver_android_datadisplay", "ERROR: GetMethodID returned null reference.");
        // Clear the exception so user can proceed
        if ((*pEnv)->ExceptionCheck(pEnv))
        {
            (*pEnv)->ExceptionDescribe(pEnv);
            (*pEnv)->ExceptionClear(pEnv);
        }
    }
}

void terminateDataDisplay()
{
}