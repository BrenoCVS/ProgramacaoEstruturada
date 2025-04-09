// Escreva um programa que receba 20 números do usuário (um de cada vez).
// Calcule a média dos números pares digitados.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num, total = 0, pares = 0;

    for (int cont = 1; cont <= 20; cont++)
    {

        cout << "Insira o " << cont << " numero: ";
        cin >> num;

        if (num % 2 == 0)
        {
            total += num;
            pares++;
        }
    }

    float media = total / pares;

    cout << fixed << setprecision(1);
    cout << "A media dos numeros pares e: " << media;
}