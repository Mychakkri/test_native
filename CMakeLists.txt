cmake_minimum_required(VERSION 3.10)

project(native_test)

add_library(native_test SHARED native.cpp)

set_target_properties(native_test PROPERTIES
    OUTPUT_NAME "native_test"
)
