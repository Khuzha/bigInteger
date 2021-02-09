#include <cstring>
#include <iostream>
#include "BigInteger.h"

BigInteger::BigInteger(const char *str)
{
    if (!validateString(str)) {
        throw std::string("Invalid string given: it's not a number");
    }
    if (*str == '-')
    {
        isPositive = false;
        str++;
    } else {
        isPositive = true;
    }

    size_t len = strlen(str);

    for (size_t i = 0; i < len; i++) {
        value.push_back(str[i]);
    }
}

std::vector<byte> BigInteger::getValue()
{
    return this->value;
}

bool BigInteger::validateString(const char *str)
{
    *str == '-' ? str++ : 0;

    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9')
        {
            return false;
        }
    }
    return true;
}

size_t BigInteger::getLength()
{
    return this->value.size();
}

void add(BigInteger term)
{
    std::vector<byte> newValue = term.getValue();
    for (size_t i = 0; i < newValue.size(); i++)
    {
        std::cout << newValue.at(i);
    }
}