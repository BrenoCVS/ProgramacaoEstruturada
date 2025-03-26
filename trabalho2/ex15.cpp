// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <iostream>;

main()
{
    int num;

    std::cout << "Insira um numero: ";
    std::cin >> num;

    if (num > 0)
    {
        std::cout << "O numero digitado e positivo";
    }
    else if (num < 0)
    {
        std::cout << "O numero digitado e negativo";
    }
    else
    {
        std::cout << " O numero digitado foi 0";
    }

    return 0;
}