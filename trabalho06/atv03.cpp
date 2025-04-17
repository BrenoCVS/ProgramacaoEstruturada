#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double preco, novo_preco;
    string produto;
    int opcao;

    cout << "Qual e o produto: " << endl;
    cin >> produto;
    cout << endl;
    cout << "Qual o valor do produto: " << endl;
    cin >> preco;
    cout << endl;
    cout << "De acordo com o menu abaixo, informe como deseja pagar: " << endl;
    cout << "1 - pagamento a vista (10% de desconto)." << endl;
    cout << "2 - pagamento com 30 dias de prazo (sem desconto)." << endl;
    cout << "3 - pagamento em 10x (Cartao de credito - sem desconto - sem acrescimo)." << endl;
    cout << "4 - pagamento em 10x (Boleto - 10% de acrescimo)" << endl;
    cin >> opcao;

    if (opcao == 1)
    {
        novo_preco = preco * 0.9;
        cout << fixed << setprecision(2);
        cout << "O valor do produto com desconto e: " << novo_preco << endl;
    }
    else if (opcao == 2)
    {
        cout << "O valor do produto para pagamento com 30 dias e: " << preco << endl;
    }
    else if (opcao == 3)
    {
        cout << "O valor do produto em 10x no cartao e: " << preco << endl;
    }
    else if (opcao == 4)
    {
        novo_preco = preco * 1.1;
        cout << fixed << setprecision(2);
        cout << "O valor do produto em 10x no boleto e: " << novo_preco << endl;
    }
    else
    {
        cout << "Opcao invalida!!!" << endl;
    }

    return 0;
}