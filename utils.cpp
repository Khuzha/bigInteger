#include <cstring>
#include <iostream>
#include "BigInteger.h"

std::vector<int> BigInteger::getValue()
{
    return this->value;
}

size_t BigInteger::getLength()
{
    return this->value.size();
}

void BigInteger::printValue()
{
    if (!this->isPositive)
    {
        std::cout << "-";
    }

    std::string vectorString = this->convertIntVectorToString(this->value);

    std::cout << vectorString << std::endl;
}

std::string BigInteger::convertIntVectorToString(std::vector<int>)
{
    std::string result;

    for (auto i = this->value.end() - 1; i >= this->value.begin(); --i)
    {
        result.push_back(*i + '0');
    }

    return result;
}

bool BigInteger::validateValue(const char *str)
{
    *str == '-' ? str++ : 0;

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return false;
        }
    }

    return true;
}