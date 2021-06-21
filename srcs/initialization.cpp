#include <cstring>
#include <iostream>
#include "BigInteger.h"

BigInteger::BigInteger(const char *str)
{
    if (!this->validateValue(str)) {
        throw std::string("Invalid string given: it's not a number");
    }
    if (*str == '-')
    {
        this->isPositive = false;
        str++;
    }
    else
    {
        this->isPositive = true;
    }

    for (size_t len = strlen(str); len != -1 && std::isdigit(str[len - 1]); len--)
    {
        int c = str[len - 1] - '0';
        // std::cout << "cur char = " << str[len - 1] << ", res char = " << c << std::endl;
        this->value.push_back(c);
    }
}

BigInteger::BigInteger(std::vector<int> value, bool isPositive)
{
    this->isPositive = isPositive;
    this->value = value;
}