#pragma once

#include <string>
#include <string_view>
#include <cstdlib>

#include "token.h"

class Parser
{
    template<typename RType>
    static RType parseLiteral(const Token& token);
public:
    Parser() = delete;
    Parser(const Parser&) = delete;
    Parser(Parser&&) = delete;
    ~Parser() = delete;
};
