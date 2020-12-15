#pragma once

#include <string>

#include "ast.h"

class ASTSerializer
{
public:
    ASTSerializer() = delete;
    ASTSerializer(const ASTSerializer&) = delete;
    ASTSerializer(ASTSerializer&&) = delete;
    ~ASTSerializer() = delete;

    std::string serialize(const AST& ast);
};
