#pragma once

#include <string>

#include "ast.h"

class ASTDeserializer
{
public:
    ASTDeserializer() = delete;
    ASTDeserializer(const ASTDeserializer&) = delete;
    ASTDeserializer(ASTDeserializer&&) = delete;
    ~ASTDeserializer() = delete;

    AST deserialize(const std::string& str);
};
