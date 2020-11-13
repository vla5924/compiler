cmake_minimum_required(VERSION 2.8)

project(interpreter)

set(INTERPRETER_INCLUDE_DIRS
    interpreter/include
    PARENT_SCOPE
)

set(INTERPRETER_SOURCE_FILES
    interpreter/src/interpreter.cpp
    interpreter/src/main.cpp
    PARENT_SCOPE
)
