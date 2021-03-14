cmake_minimum_required(VERSION 3.10.2)
project("projectb")

set(projectPath C:/Users/Owner/AndroidStudioProjects/ProjectB/app)
add_library( native-lib        SHARED
             native-lib.cpp )

add_library(projectA STATIC IMPORTED)
set_target_properties(projectA PROPERTIES IMPORTED_LOCATION ${projectPath}/libs/${ANDROID_ABI}/libprojecta_static.a)
include_directories(${projectPath}/src/main/cpp/include)


find_library( log-lib          log )
target_link_libraries( native-lib
                       projectA
                       ${log-lib} )