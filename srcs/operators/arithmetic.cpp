#include <cstring>
#include <iostream>
#include "../BigInteger.h"

BigInteger BigInteger::operator + (BigInteger term2obj)
{
    std::vector<int> term1 = this->getValue();
    std::vector<int> term2 = term2obj.getValue();
    std::vector<int> result;
    bool isPositive = true;

    for (std::vector<int>::size_type i = 0; i != term1.size(); i++)
    {
        int sum = term1[i] + term2[i];
        sum = sum >= 10 ? sum - 1 : sum;
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
