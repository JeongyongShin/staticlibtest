//
// Created by Owner on 2021-03-13.
//

#ifndef PROJECTA_SUMWRAPPER_H
#define PROJECTA_SUMWRAPPER_H


#include <jni.h>
#include <android/native_activity.h>
#include <android/native_window_jni.h>
#include <android/native_window.h>
#include <functional>
#include <thread>


class sumWrapper {
public:
    explicit sumWrapper( jdouble selection );
    ~sumWrapper();

    int calcFovSelection( );

private:
    double_t requestedSelection_;
};

#endif //PROJECTA_SUMWRAPPER_H
