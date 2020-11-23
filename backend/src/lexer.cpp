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

void Lexer::strProcess(const std::string& str, std::list<Token>& tok_list)
{
    std::string id_str;
    static int last_symb = ' ';
    while (isspace(last_symb))
    last_symb = getchar();

    if (isalpha(last_symb))
    {
        id_str = last_symb;
        while (isalnum((last_symb = getchar())))
        id_str += last_symb;
    }
    if (Lexer::keywords.find(id_str) != Lexer::keywords.end())
    {
        tok_list.push_back({Type::Keyword, id_str});
    } else tok_list.push_back({Type::Identifier, id_str});

    if (isdigit(last_symb) || last_symb == '.') {
        std::string num_str;
        do {
        num_str += last_symb;
        last_symb = getchar();
        } while (isdigit(last_symb) || last_symb == '.');
        static double value = strtod(num_str.c_str(), 0);
    }
    // che-to sdelal, nado c 56 strokoi token.h eto svyazat'
    // plus operators, plus string, plus integer, plus floating point
}
