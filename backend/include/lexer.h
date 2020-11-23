#pragma once

#include <string_view>
#include <list>
#include <string>
#include <map>

#include "stringvec.h"
#include "token.h"

class Lexer
{
    using Type = Token::Type;
    using Keyword = Token::Keyword;
    using Operator = Token::Operator;

    static std::map<std::string_view, Token::Keyword> keywords;
    static std::map<std::string_view, Token::Operator> operators;

public:
    Lexer() = delete;
    Lexer(const Lexer&) = delete;
    Lexer(Lexer&&) = delete;
    ~Lexer() = delete;

    static std::list<Token> process(const StringVec& source);
    static void strProcess(const std::string& str, std::list<Token>& tok_list);
};
