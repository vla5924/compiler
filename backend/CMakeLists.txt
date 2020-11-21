cmake_minimum_required(VERSION 2.8)

project(backend)

set(BACKEND_INCLUDE_DIRS
    backend/include
    PARENT_SCOPE
)

set(BACKEND_SOURCE_FILES
    backend/src/lexer.cpp
    backend/src/parser.cpp
    backend/src/preprocessor.cpp
    backend/src/stringvec.cpp
    PARENT_SCOPE
)
