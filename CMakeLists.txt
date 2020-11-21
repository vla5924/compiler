cmake_minimum_required(VERSION 2.8)

project(CompilerProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(ast)
add_subdirectory(backend)
add_subdirectory(compiler)
add_subdirectory(interpreter)

include_directories(${AST_INCLUDE_DIRS})
include_directories(${BACKEND_INCLUDE_DIRS})
include_directories(${COMPILER_INCLUDE_DIRS})
include_directories(${INTERPRETER_INCLUDE_DIRS})

add_library(ast STATIC ${AST_SOURCE_FILES})
add_library(backend STATIC ${BACKEND_SOURCE_FILES})

add_executable(compiler ${COMPILER_SOURCE_FILES})
add_executable(interpreter ${INTERPRETER_SOURCE_FILES})

target_link_libraries(compiler ast backend)
target_link_libraries(interpreter ast)
