cmake_minimum_required(VERSION 2.8)

project(ast)

set(AST_INCLUDE_DIRS
    ast/include
    PARENT_SCOPE
)

set(AST_SOURCE_FILES
    ast/src/ast.cpp
    ast/src/astdeserializer.cpp
    ast/src/astnode.cpp
    ast/src/astserializer.cpp
    PARENT_SCOPE
)
