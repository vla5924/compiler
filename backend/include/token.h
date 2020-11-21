#pragma once

#include <string>

struct Token
{
    enum class Keyword
    {
        Begin,
        End,
        Var,
        Integer,
        If,
        Then,
        Else,
        While,
        Do,
        For,
        To,
        Repeat,
        Until
    };

    enum class Operator
    {
        Colon,
        Semicolon,
        Stop,
        Assign,
        Plus,
        Minus,
        Mult,
        Div,
        Equal,
        NotEqual,
        Less,
        More,
        LessEqual,
        MoreEqual,
        LeftBrace,
        RightBrace
    };

    enum class Type
    {
        Keyword,
        Identifier,
        Operator,
        IntegerLiteral,
        FloatingPointLiteral,
        StringLiteral
    };
    Type type;

    union Value
    {
        Keyword kwValue;
        std::string idValue;
        Operator opValue;
        std::string literalValue;
    };
};
