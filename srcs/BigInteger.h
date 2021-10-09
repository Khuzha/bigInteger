#ifndef MYBIGINTEGER_BIGINTEGER_H
#define MYBIGINTEGER_BIGINTEGER_H

#include <string>
#include <vector>

using byte = unsigned char;

class BigInteger {
private:
    std::vector<int> value;

public:
    bool isPositive;
    BigInteger(const char *str);
    BigInteger(std::vector<int> value, bool isPositive);

    std::vector<int> getValue();
    bool validateValue(const char *str);
    bool validateValue(std::vector<int> value);
    size_t getLength();
    void printValue();
    std::string convertIntVectorToString(std::vector<int>);

    BigInteger operator + (const BigInteger term2);
    BigInteger operator - (const BigInteger term2);
    bool operator == (const BigInteger num2obj);
    bool operator > (const BigInteger num2obj);
    bool operator < (const BigInteger num2obj);
};

#endif 
