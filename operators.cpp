#include <cstring>
#include <iostream>
#include "BigInteger.h"

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

bool BigInteger::operator > (BigInteger num2obj)
{
  std::vector<int> num1 = this->getValue();
  std::vector<int> num2 = num2obj.getValue();
  bool bothPositive = this->isPositive && num2obj.isPositive;
  int len1 = num1.size();
  int len2 = num2.size();

  if (!bothPositive)
  {
    if (this->isPositive && !num2obj.isPositive)
      return true;
    if (!this->isPositive && num2obj.isPositive)
      return false;
  }

  if (len1 > len2)
    return bothPositive;
  if (len1 < len2)
    return !bothPositive;

  for (size_t i = num1.size() - 1; i >= 0; i--)
  {
    if (num1[i] > num2[i])
      return bothPositive;
    if (num1[i] < num2[i])
      return !bothPositive;
  }

  return false;
}

bool BigInteger::operator < (BigInteger num2obj)
{
  return !(*this > num2obj);
}