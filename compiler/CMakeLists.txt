cmake_minimum_required(VERSION 2.8)

project(compiler)

set(COMPILER_INCLUDE_DIRS
    compiler/include
    PARENT_SCOPE
)

set(COMPILER_SOURCE_FILES
    compiler/src/compiler.cpp
    compiler/src/main.cpp
    PARENT_SCOPE
)
