cmake_minimum_required(VERSION 3.0.0)

enable_testing()

project(physeng)

set(SOURCE_FILES
        include/physeng/core/math/vector2.h
        src/physeng/core/math/vector2.cpp)

add_subdirectory(external)

add_subdirectory(test)

add_library(physeng ${SOURCE_FILES})

target_include_directories(physeng PUBLIC include)