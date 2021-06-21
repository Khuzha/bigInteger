#include <iostream>
#include "BigInteger.h"

int main() {
    try {
        BigInteger mybigint = BigInteger("123");
        // std::cout << "lenght = " << mybigint.getLength() << std::endl;
        BigInteger other = BigInteger("111");
        BigInteger sum = mybigint + other;
        // mybigint.printValue();
        // other.printValue();
        // sum.printValue();
    } catch (std::string error) {
        std::cout << error;
    }
//    mybigint.add(BigInteger("321"));
    return 0;
}
