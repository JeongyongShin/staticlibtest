#include <jni.h>
#include <string>
#include<stdio.h>
#include<iostream>
#include <android/log.h>

#include "sumWrapper.h"
#include "MinusCalc.h"

using namespace std;

sumWrapper *calcResult = nullptr;
MinusCalc *minusCalc = nullptr;

extern "C" JNIEXPORT jstring JNICALL
Java_sec_unitile_projectb_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jstring JNICALL
Java_sec_unitile_projectb_CallNativeFunction_stringFromJNI2(JNIEnv *env, jclass clazz) {
    string hello = "It's  Native C++ 2nd at Project B";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_sec_unitile_projectb_CallNativeFunction_processSumation(JNIEnv *env, jclass clazz,
                                                             jdouble fov_selection) {
    int a;
    calcResult = new sumWrapper(fov_selection);
    minusCalc = new MinusCalc();
    a = calcResult->calcFovSelection();


    return reinterpret_cast<jint>  (minusCalc->calcMinus(a));
}