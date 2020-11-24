#include <list>
#include <iostream>

#include "token.h"

using TokenList = std::list<Token>;

std::ostream& operator<<(std::ostream& out, const TokenList& list);
