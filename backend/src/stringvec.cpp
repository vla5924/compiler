#include "stringvec.h"

std::ostream& operator<<(std::ostream& out, const StringVec& vec)
{
    for (auto& str : vec)
        out << str << '\n';
    return out;
}
