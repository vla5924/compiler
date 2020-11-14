#pragma once

#include <string_view>
#include <list>
#include <string>
#include <map>

#include "token.h"

class Lexer
{
    static std::map<std::string_view, Token::Keyword> keywords;
    static std::map<std::string_view, Token::Operator> operators;
public:
    static std::list<Token> process(std::string_view source);
};
