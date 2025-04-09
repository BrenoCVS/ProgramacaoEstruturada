// Escrever um programa que leia 15 números, um de cada vez, e conte quantos
//  destes valores são negativos. Exiba a quantidade de números negativos digitados.

#include <iostream>
using namespace std;

int main()
{

    int num, negativos = 0;
    for (int cont = 1; cont <= 15; cont++)
    {
        cout << "Insira o " << cont << " numero: ";
        cin >> num;

        if (num < 0)
        {
            negativos++;
        }
    }

    cout << "Foram digitados " << negativos << " numeros negativos";
}