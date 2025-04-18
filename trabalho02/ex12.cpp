// Faça um programa para uma loja de tintas.
// O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
// Considere que a cobertura de tinta é de 1 litro para cada 3 metros quadrados e que
// a tinta é vendida em latas de 18 litros, que custa R$ 80,00.
// Informe ao usuário as quantidades de latas de tinta que serão compradas e o preço total.

#include <iostream>;
#include <cmath>;

main()
{

    float metros;

    std::cout << "Quantos metros quadrados serao pintados: ";
    std::cin >> metros;

    float calc = metros / 3;
    int latas = std::ceil(calc / 18);

    float preco_total = latas * 80.0;

    std::cout << "O numero de latas e: " << latas << ". O preco total e: R$ " << preco_total;

    return 0;
}