// Reescreva o programa do exercício anterior (exercício 5) considerando
// o zero como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Insira um numero: ";
    cin >> num;
    if (num > 0)
    {
        cout << "O numero digitado e positivo";
    }
    else if (num < 0)
    {
        cout << "O numero digitado e negativo";
    }
    else
    {
        cout << "O numero digitado e zero";
    }
    return 0;
}