#include <iostream>
#include "srcs/BigInteger.h"

int main() {
    try {
        BigInteger mybigint = BigInteger("123");
        // std::cout << "lenght = " << mybigint.getLength() << std::endl;
        BigInteger other = BigInteger("123");
        std::cout << "compare result = " << (mybigint == other) << std::endl;
        // BigInteger sum = mybigint + other;
        // mybigint.printValue();
        // other.printValue();
        // sum.printValue();
    } catch (std::string error) {
        std::cout << error;
    }
//    mybigint.add(BigInteger("321"));
    return 0;
}
