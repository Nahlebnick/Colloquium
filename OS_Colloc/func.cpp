#include "func.h"

std::vector<unsigned long long> factorials(unsigned int n) {
    std::vector<unsigned long long> result;
    result.reserve(n);
    unsigned long long acc = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        acc *= i;
        result.push_back(acc);
    }
    return result;
}
