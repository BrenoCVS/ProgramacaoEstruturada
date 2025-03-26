// Faça um Programa que solicite uma distância em metros e a converta para centímetros.

#include <iostream>;

main()
{
    int cm, m;

    std::cout << "Informe uma distancia em metros: ";
    std::cin >> m;

    cm = m * 100;

    std::cout << "A distancia em centimetros e: " << cm;
    return 0;
}