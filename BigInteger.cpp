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

std::vector<int> BigInteger::getValue()
{
    return this->value;
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

size_t BigInteger::getLength()
{
    return this->value.size();
}

void add(BigInteger term)
{
    std::vector<int> newValue = term.getValue();
    for (size_t i = 0; i < newValue.size(); i++)
    {
        std::cout << newValue.at(i);
    }
}

BigInteger BigInteger::operator + (BigInteger term2obj)
{
    std::vector<int> term1 = this->getValue();
    std::vector<int> term2 = term2obj.getValue();
    std::vector<int> result;
    bool isPositive = true;
    // BigInteger result = new BigInteger();
    // std::string result = "";

    for (std::vector<int>::size_type i = 0; i != term1.size(); i++)
    {
        int sum = term1[i] + term2[i];
        sum = sum >= 10 ? sum - 1 : sum;
        // std::cout << "term1: " << term1[i] << ", term2: " << term2[i] << ", sum: " << sum << std::endl;
        result.push_back(sum);
    }

    std::cout << "term1: ";
    this->printValue();
    std::cout << "term2: ";
    term2obj.printValue();
    std::cout << "sum: ";


    for (auto i = result.end() - 1; i >= result.begin(); --i)
    {
        std::cout << *i;
    }
    std::cout << std::endl;

    return BigInteger(result, isPositive);
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