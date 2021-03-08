cmake_minimum_required(VERSION 3.17)
project(test_jni)

set(CMAKE_CXX_STANDARD 20)

find_package(JNI REQUIRED)

include_directories(${JNI_INCLUDE_DIRS})

include_directories(jni)

add_subdirectory(src)