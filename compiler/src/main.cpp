#include <iostream>
#include <string>

#include <preprocessor.h>
#include <stringvec.h>

#include "compiler.h"

int main(int argc, char* argv[])
{
    std::cout << "Compiler launched.\n";
    StringVec str = {
        "// hello", 
        "how 'are' you?",
        "what is // your name?",
        "how 'old' // are 'you'?",
        "how do 'you //feel' today?",
        "do you 'like' the '//weather' // today?"
    };
    std::cout << Preprocessor::process(str);

    return Compiler::exec(argc, argv);
}
