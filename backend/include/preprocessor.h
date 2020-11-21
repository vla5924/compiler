#pragma once

#include "stringvec.h"

class Preprocessor
{
    static StringVec removeComments(const StringVec& source);
public:
    Preprocessor() = delete;
    Preprocessor(const Preprocessor&) = delete;

    static StringVec process(const StringVec& source);
};
