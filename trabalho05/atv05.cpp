// Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Insira um numero: ";
    cin >> num;

    if (num >= 0)
    {
        cout << "O numero digitado e positivo";
    }
    else
    {
        cout << "O numero digitado e negativo";
    }
}