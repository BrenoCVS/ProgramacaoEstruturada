// Construir um programa que calcule a média aritmética de 20 valores inteiros positivos,
//  fornecidos pelo usuário. Exiba o resultado da média.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num, total = 0;
    float media;

    for (int cont = 1; cont <= 20; cont++)
    {

        cout << "Insira o " << cont << " numero: ";
        cin >> num;

        total += num;
    }

    media = total / 20;

    cout << fixed << setprecision(1);
    cout << "A media e: " << media;
}