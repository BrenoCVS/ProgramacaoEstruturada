#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome;
    int irmaos, idade, ano_nasc;

    cout << "        Bom dia..." << endl;
    cout << endl;
    cout << "Qual e o seu nome: " << endl;
    cin >> nome;
    cout << endl;
    cout << "Quantos irmaos voce tem: " << endl;
    cin >> irmaos;
    cout << endl;
    cout << "Qual e a sua idade: " << endl;
    cin >> idade;

    ano_nasc = 2025 - idade;

    cout << "Entao se vocde se chama " << nome << ", tem " << irmaos << ", e nasceu em " << ano_nasc << "?" << endl;

    return 0;
}