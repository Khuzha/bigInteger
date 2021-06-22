#include <cstring>
#include <iostream>
#include "../BigInteger.h"


bool BigInteger::operator == (BigInteger num2obj)
{
  std::vector<int> num1 = this->getValue();
  std::vector<int> num2 = num2obj.getValue();
  int len1 = num1.size();
  int len2 = num2.size();

  if (len1 != len2)
    return false;

  for (int i = num1.size() - 1; i >= 0; i--)
  {
    if (num1[i] != num2[i])
      return false;
  }

  return true;
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
  return !(*this > num2obj) && !(*this == num2obj);
}
