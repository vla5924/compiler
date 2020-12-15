#pragma once

#include <vector>
#include <string>
#include <iostream>

using StringVec = std::vector<std::string>;

std::ostream& operator<<(std::ostream& out, const StringVec& vec);