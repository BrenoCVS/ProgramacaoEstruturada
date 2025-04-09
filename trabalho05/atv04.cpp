// Construa um programa em C++ que receba o nome e o valor de um produto, 0
// calcule o valor do produto após um desconto de 13%. Apresente o resultado como o abaixo:
// Produto: <nome do produto>
// Valor: <valor original do produto>
// Desconto: <valor do desconto>
// Valor Final: <valor do produto após o desconto>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string produto;
    float valor, valor_final, desconto;

    cout << " Informe o nome do produto: ";
    cin >> produto;
    cout << " Informe o valor do produto: ";
    cin >> valor;

    desconto = valor * 0.13;
    valor_final = valor - desconto;

    cout << fixed << setprecision(2);
    cout << " Produto: " << produto << endl;
    cout << " Valor: " << valor << endl;
    cout << " Desconto: " << desconto << endl;
    cout << " Valor Final: " << valor_final << endl;

    return 0;
}