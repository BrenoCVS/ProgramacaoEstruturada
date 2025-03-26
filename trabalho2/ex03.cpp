// Faça um Programa que solicite dois números e imprima na tela a soma dos números.

#include <iostream>;

main()
{
    int num1, num2;

    std::cout << "Insira o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    int soma = num1 + num2;

    std::cout << "A soma dos numeros e: " << soma;

    return 0;
}