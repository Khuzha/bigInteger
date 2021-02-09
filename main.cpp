#include <iostream>
#include "BigInteger.h"

int main() {
    try {
        BigInteger mybigint("-1212321342904238598347598347583495734985734985739485sd79834782048058093458093405984309583049850394859034805349058430958093485039423843242343249820384093");
    } catch (std::string error) {
        std::cout << error;
    }
//    mybigint.add(BigInteger("321"));
    return 0;
}
