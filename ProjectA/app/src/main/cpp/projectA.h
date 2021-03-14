#ifndef PROJECTA_PROJECTA_H
#define PROJECTA_PROJECTA_H

#include "jni.h"
#include <string>
#include<stdio.h>
#include<iostream>
using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_sec_unitile_projecta_CallNativeFunction_stringFromJNI2(JNIEnv *env, jclass clazz);

extern "C"
JNIEXPORT jint JNICALL
Java_sec_unitile_projecta_CallNativeFunction_processSumation(JNIEnv *env, jclass clazz,
                                                             jdouble fov_selection);


#endif //PROJECTA_PROJECTA_H