#pragma once

#include "astnode.h"

class AST
{
    ASTNode* root_;

public:
    AST();

    ASTNode* root() const;
};
