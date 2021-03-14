cmake_minimum_required(VERSION 3.10.2)

project("projecta")
add_library(  projecta     SHARED
              projectA.cpp
              sumWrapper.cpp
              MinusCalc.cpp
             )

add_library(  projecta_static     STATIC
              sumWrapper.cpp
              MinusCalc.cpp
           )

find_library( log-lib    log )

target_link_libraries( projecta
                      projecta_static
                       ${log-lib} )