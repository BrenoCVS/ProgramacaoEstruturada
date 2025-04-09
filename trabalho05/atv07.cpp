// O cardápio de um carrinho de lanche é o seguinte:
// Especificação    |      Código          |Preço
// Cachorro quente          100               9,20
// Bauru simples            101              12,00
// Bauru com ovo            102              13,00
// Hamburger                103              10,00
// Cheeseburguer            104              12,00
// Refrigerante Lata        105               5,00
// Água                     106               3,00
// Escrever um programa que leia o código do item pedido, a quantidade do
// item e calcule o valor a ser pago por aquele lanche. Considere que a cada
// execução somente será calculado um item. Informe que código inválido caso seja digitado algo diferente.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cod, quant;
    float preco;

    cout << "Insira o codigo do item: ";
    cin >> cod;
    cout << "Insira a quantidade do item: ";
    cin >> quant;

    cout << fixed << setprecision(2);
    if (cod == 100)
    {
        preco = quant * 9.2;
        cout << " O produto e: Cachorro quente" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 101)
    {
        preco = quant * 12.0;
        cout << " O produto e: Bauru simples" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 102)
    {
        preco = quant * 13.0;
        cout << " O produto e: Bauru com ovo" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 103)
    {
        preco = quant * 10.0;
        cout << " O produto e: Hamburger" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 104)
    {
        preco = quant * 12.0;
        cout << " O produto e: Cheeseburguer" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 105)
    {
        preco = quant * 5.0;
        cout << " O produto e: Refrigerante Lata" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else if (cod == 106)
    {
        preco = quant * 3.0;
        cout << " O produto e: Agua" << endl;
        cout << "O valor a ser pago e: " << preco;
    }
    else
    {
        cout << "Codigo invalido." << endl;
    }
}