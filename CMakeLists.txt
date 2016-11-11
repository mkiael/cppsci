cmake_minimum_required(VERSION 3.0.0)

enable_testing()

project(cppsci)

set(SOURCE_FILES
  include/cppsci/math/vector2.h
  src/cppsci/math/vector2.cpp)

add_subdirectory(external)

add_subdirectory(test)

add_library(cppsci ${SOURCE_FILES})

target_include_directories(cppsci PUBLIC include)