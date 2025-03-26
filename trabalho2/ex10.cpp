// Faça um programa que recebe um valor do usuário e calcula 12% desse total.

#include <iostream>;

main()
{

    int val;
    float result;

    std::cout << " Insira um valor: ";
    std::cin >> val;

    result = (12.0 / 100) * val;

    std::cout << " 12 porcento de " << val << " e igual a: " << result;
    return 0;
}