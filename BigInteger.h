#ifndef MYBIGINTEGER_BIGINTEGER_H
#define MYBIGINTEGER_BIGINTEGER_H

#include <string>
#include <vector>

using byte = unsigned char;

class BigInteger {
private:
    std::vector<byte> value;
    bool isPositive;

public:
    BigInteger(const char *str);

    std::vector<byte> getValue();
    bool validateString(const char *str);
    size_t getLength();
    void add(BigInteger term);
};


#endif