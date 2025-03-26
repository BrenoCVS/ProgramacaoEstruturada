// Escreva um programa para determinar o maior de 3 numeros dados

#include <iostream>;
#include <string>;

main()
{
    int num1, num2, num3;

    std::cout << "Insira o primerio numero: ";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    std::cout << "Insira o terceiro numero: ";
    std::cin >> num3;

    if ((num1 >= num2) && (num1 >= num3))
    {
        std::cout << "O maior numero digitado foi: " << num1;
    }
    else if ((num2 >= num3) && (num2 >= num1))
    {
        std::cout << "O maior numero digitado foi: " << num2;
    }
    else
    {
        std::cout << "O maior numero digitado foi: " << num3;
    }

    return 0;
}