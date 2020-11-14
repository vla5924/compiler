#pragma once

#include <string>
#include <string_view>

class Preprocessor
{
    static std::string removeComments(std::string_view source);
public:
    Preprocessor() = delete;
    Preprocessor(const Preprocessor&) = delete;

    static std::string process(std::string_view source);
};
