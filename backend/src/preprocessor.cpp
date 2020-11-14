#include "preprocessor.h"

std::string Preprocessor::removeComments(std::string_view source)
{
    std::string result;
    char prev = 0;
    bool inComment = false;
    bool inStringLiteral = false;
    bool skip;
    for (char sym : source)
    {
        skip = false;
        // If we are inside the comment entity
        // then we can ignore any symbol until line ends
        if (!inComment)
        {
            // If symbol is quote and it is not escaped
            // this means we are entering or leaving string literal
            if (sym == '\'' && prev != '\\')
                inStringLiteral = !inStringLiteral;
            // If we are not inside string literal
            // then we can check if there is '//' sequence
            if (!inStringLiteral)
            {
                if (sym == '/' && prev == '/')
                {
                    inComment = true;
                    result.pop_back();
                    skip = true;
                }
            }
        }
        else if (sym == '\n')
            inComment = false;
        else
            skip = true;
        if (!skip)
            result.push_back(sym);
        prev = sym;
    }
    return result;
}

std::string Preprocessor::process(std::string_view source)
{
    return removeComments(source);
}
