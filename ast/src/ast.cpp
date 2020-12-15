#include "ast.h"

AST::AST()
    : root_(nullptr)
{

}

ASTNode::Ptr AST::root() const
{
    return root_;
}
