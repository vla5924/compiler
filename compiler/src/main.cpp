#include <iostream>
#include <string>

#include <preprocessor.h>
#include <stringvec.h>
#include <lexer.h>

#include "compiler.h"

int main(int argc, char* argv[])
{
    std::cout << "Compiler launched.\n";
    StringVec str = {
        "var i, j, k: integer;",
        "begin",
        "   i:=j + k;",
        "   i:=i + 123;",
        "end." 
    };
    std::cout << Preprocessor::process(str);
    std::cout << std::endl;
    auto test_var = Lexer::process(Preprocessor::process(str));
    for (auto i = test_var.begin(); i != test_var.end(); ++i)
    {
        if (i->type == Token::Type::Keyword)
        {
            std::cout << "KEYWORD" << std::endl;
        }
        if (i->type == Token::Type::Operator)
        {
            std::cout << "OPERATOR" << std::endl;
        }
        if (i->type == Token::Type::Identifier)
        {
            std::cout << "IDENTIFIER " << std::endl;
        }
        if (i->type == Token::Type::IntegerLiteral)
        {
            std::cout << "INTEGER" << std::endl;
        }
    }

    return Compiler::exec(argc, argv);
}
