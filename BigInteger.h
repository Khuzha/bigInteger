#ifndef MYBIGINTEGER_BIGINTEGER_H
#define MYBIGINTEGER_BIGINTEGER_H

#include <string>
#include <vector>

using byte = unsigned char;

class BigInteger {
private:
    std::vector<byte> value;
    bool isPositiv;

public:
    BigInteger(const char *value);
    size_t getLength()
    {
        return value.size();
    }
};


#endif