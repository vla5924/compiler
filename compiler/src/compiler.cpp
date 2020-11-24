#include "compiler.h"

int Compiler::exec(int argc, char* argv[])
{
    std::cout << "Compiler launched.\n";
    // source = readFile(pathtofile...);
    StringVec source = {
        "var i, j, k: integer;",
        "begin",
        "   i:=j + k;",
        "   i:=i + 123;",
        "end." 
    };
    source = Preprocessor::process(source);
    std::cout << source << std::endl;
    TokenList tokens = Lexer::process(source);
    std::cout << tokens << std::endl;

    return 0;
}
