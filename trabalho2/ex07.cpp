// Faça um programa que calcula a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <iostream>;
#include <iomanip>;
#include <cmath>>;

main()
{
    float lq, daq;

    std::cout << "Informe a lateral do quadrado: ";
    std::cin >> lq;

    daq = 2 * std::pow(lq, 2);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "O dobro da area do quadrado e: " << daq;
    return 0;
}