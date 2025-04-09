// Escreva um programa que recebe dois números e retorna o maior deles.

#include <iostream>>;

main()
{
    int num1, num2;

    std::cout << "Insira o primeriro numero: ";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    if (num1 > num2)
    {
        std::cout << "O numero " << num1 << " e maior que o numero " << num2 << ".";
    }
    else
    {
        std::cout << "O numero " << num2 << " e maior que o numero " << num1 << ".";
    }

    return 0;
}