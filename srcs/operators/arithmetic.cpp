#include <cstring>
#include <iostream>
#include "../BigInteger.h"

BigInteger BigInteger::operator + (BigInteger term2obj)
{
    std::vector<int> num1 = this->getValue();
    std::vector<int> num2 = term2obj.getValue();
    int len1 = num1.size();
    int len2 = num2.size();
    std::vector<int> result;
    bool isPositive = true;
    bool tmp = 0;

    for (std::vector<int>::size_type i = 0; i != num1.size(); i++)
    {
        int term1 = num1[i] + tmp;
        int term2 = len2 > i ? num2[i] : 0;
        tmp = 0;

        int sum = std::abs(term2obj.isPositive ? term1 + term2 : term1 - term2);
        if (sum >= 10)
        {
          sum -= 10;
          tmp = 1;
        }
        // std::cout << "term1[i] = " << term1 << ", term2[i] = " << term2 << ", sum = " << sum << ", tmp = " << tmp << std::endl;

        result.push_back(sum);
    }

    if (tmp)
      result.push_back(tmp);

    if (!term2obj.isPositive)
    {
      BigInteger temp = term2obj;
      temp.isPositive = true;
      isPositive = *this > temp;
    }

    std::cout << "term1: ";
    this->printValue();
    std::cout << "term2: ";
    term2obj.printValue();
    std::cout << "sum:   ";

    if (!isPositive)
    {
      std::cout << "-";
    }
    for (auto i = result.end() - 1; i >= result.begin(); --i)
    {
        std::cout << *i;
    }
    std::cout << std::endl;

    return BigInteger(result, isPositive);
}

BigInteger BigInteger::operator - (BigInteger term2obj)
{
    std::vector<int> minuend = this->getValue();
    std::vector<int> subtrahend = term2obj.getValue();
    std::vector<int> result;
    bool isPositive = true;

    for (std::vector<int>::size_type i = 0; i != minuend.size(); i++)
    {
      int diff;

      if (minuend[i] >= subtrahend[i])
      {
        diff = minuend[i] - subtrahend[i];
      }
      else
      {
        int debt;
        if (i + 1 < minuend.size())
        {
          debt = 10;
          minuend[i + 1]--;
        } else {
          debt = 0;
        }

        diff = debt + minuend[i] - subtrahend[i];
        std::cout << "minuend = " << minuend[i] + debt << ", subtrahend = " << subtrahend[i] << ", diff = " << diff << std::endl;
      }
      result.push_back(diff);
    }

    std::cout << "minuend: ";
    this->printValue();
    std::cout << "subtrahend: ";
    term2obj.printValue();
    std::cout << "diff: ";

    for (auto i = result.end() - 1; i >= result.begin(); --i)
    {
        std::cout << *i;
    }
    std::cout << std::endl;

    return BigInteger(result, isPositive);
}
