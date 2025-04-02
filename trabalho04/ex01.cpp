// Faça um programa para ler N números inteiros – informe um de cada vez.
// A repetição será encerrada quando o usuário digitar o número 0. O programa deve informar quantos
//  números foram digitados.

#include <iostream>
#include <string>

int main()
{

    int numero;
    int contador = 0;

    do
    {
        std::cout << "Informe o numero: ";
        std::cin >> numero;

        if (numero != 0)
        {
            contador = contador + 1;
        }
    } while (numero != 0);

    std::cout << "Foram digitados " << contador << " numeros";
    return 0;
}