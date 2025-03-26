// Faça um Programa que solicite o raio de um círculo, calcule e mostre sua área.

#include <iostream>;
#include <iomanip>;
#include <cmath>;

main()
{
    float raio, area, raio_elevado;

    std::cout << "Informe o raio do circulo: ";
    std::cin >> raio;

    area = std::pow(raio, 2) * 3.14;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A area da circunferencia e: " << area;
    return 0;
}