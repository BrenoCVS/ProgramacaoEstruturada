// Escreva um programa para exibir os números contidos no intervalo de n a m, inclusive.
// n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).

#include <iostream>

int main()
{

    int num1, num2;

    std::cout << "Insira o primerio numero: ";
    std::cin >> num1;
    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    std::cout << " A sequencia de " << num1 << " ate " << num2 << ":" << std::endl;

    for (int cont = num1; cont <= num2; cont++)
    {
        std::cout << cont << std::endl;
    }

    return 0;
}