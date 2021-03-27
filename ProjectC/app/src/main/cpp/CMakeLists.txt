cmake_minimum_required(VERSION 3.10.2)

project("projectc")

add_library( native-lib
             SHARED
             native-lib.cpp )

add_library(  projectc_static     STATIC
        sumWrapper.cpp
        MinusCalc.cpp
        )

find_library( log-lib   log )

target_link_libraries( native-lib
                       projectc_static
                       ${log-lib} )