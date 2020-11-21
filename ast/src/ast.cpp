#include "ast.h"

AST::AST()
    : root_(nullptr)
{

}

ASTNode* AST::root() const
{
    return root_;
}
