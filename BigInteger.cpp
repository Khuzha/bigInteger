#include <cstring>
#include <iostream>
#include "BigInteger.h"

BigInteger::BigInteger(const char *str)
{
    if (*str == '-')
    {
        isPositiv = false;
        str++;
    } else {
        isPositiv = true;
    }

    size_t len = strlen(str);

    for (size_t i = 0; i < len; i++) {
        value.push_back(str[i]);
    }
    std::cout << std::endl;
}