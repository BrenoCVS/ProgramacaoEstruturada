// Escreva um programa para calcular a soma dos números pares contidos entre 100 e 200,
// inclusive. Exiba o resultado da soma.

#include <iostream>

int main()
{
    int total = 0;
    for (int cont = 100; cont <= 200; cont++)
    {

        if (cont % 2 == 0)
        {

            total += cont;
        }
    }

    std::cout << "O total da soma: " << total;
}