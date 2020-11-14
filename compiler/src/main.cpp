#include <iostream>
#include <string>

#include <preprocessor.h>

#include "compiler.h"

int main(int argc, char* argv[])
{
    std::cout << "Compiler launched.\n";
    std::string str = "// hello\n" 
    "how 'are' you?\n"
    "what is // your name?\n"
    "how 'old' // are 'you'?\n"
    "how do 'you //feel' today?\n"
    "do you 'like' the '//weather' // today?";
    std::cout << Preprocessor::process(str);

    return Compiler::exec(argc, argv);
}
