// Escreva um programa para ler um número inteiro (considere que serão lidos apenas
// valores positivos e inteiros) e escrever se é par ou ímpar.

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Insira um numero: ";
    cin >> num;

    if (num % 2 == 0)
    {

        cout << "O numero " << num << " e par";
    }
    else
    {

        cout << "O numero " << num << " e impar";
    }
}