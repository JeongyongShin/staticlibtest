#include <cstdio>
#include <cstring>
#include "sumWrapper.h"

sumWrapper::sumWrapper( jdouble selection)  : requestedSelection_(selection){
}

sumWrapper::~sumWrapper() {
}

int sumWrapper::calcFovSelection( ) { return requestedSelection_ * 100;}