#include "lexer.h"

std::map<std::string_view, Token::Keyword> Lexer::keywords = {
    { "begin", Token::Keyword::Begin },
    { "end", Token::Keyword::End },
    { "var", Token::Keyword::Var },
    { "integer", Token::Keyword::Integer },
    { "if", Token::Keyword::If },
    { "then", Token::Keyword::Then },
    { "else", Token::Keyword::Else },
    { "while", Token::Keyword::While },
    { "do", Token::Keyword::Do },
    { "for", Token::Keyword::For },
    { "to", Token::Keyword::To },
    { "repeat", Token::Keyword::Repeat },
    { "until", Token::Keyword::Until },
};

std::map<std::string_view, Token::Operator> Lexer::operators = {
    { ":", Token::Operator::Colon },
    { ";", Token::Operator::Semicolon },
    { ".", Token::Operator::Stop },
    { ":=", Token::Operator::Assign },
    { "+", Token::Operator::Plus },
    { "-", Token::Operator::Minus },
    { "*", Token::Operator::Mult },
    { "/", Token::Operator::Div },
    { "=", Token::Operator::Equal },
    { "<>", Token::Operator::NotEqual },
    { "<", Token::Operator::Less },
    { ">", Token::Operator::More },
    { "<=", Token::Operator::LessEqual },
    { ">=", Token::Operator::MoreEqual },
    { "(", Token::Operator::LeftBrace },
    { ")", Token::Operator::RightBrace },
};

std::list<Token> Lexer::process(const StringVec& source)
{
    std::list<Token> tokens;
    // TODO
    // tokens.push_back({Type::Identifier, "hello"});
    return tokens;
}
