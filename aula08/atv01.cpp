#include <iostream>
#include <cstring>
using namespace std;

int main(){
int NPROD;

cout << "Digite o numero de produtos que serao cadastrados: ";
cin >> NPROD;
fflush(stdin);
    struct Produto
    {
        char nome[60];
        char codigo[10];
        char fabricante[30];
        char data[11];
        char validade[11];
        float preco;
    } produto[NPROD];

    for(int i = 0; i<NPROD; i++){
        fflush(stdin);
        cout << "Digite o nome do produto: ";
        cin.getline(produto[i].nome, 60);
        cin.ignore();
        fflush(stdin);
        cout << "Digite o codigo do produto: ";
        cin.getline(produto[i].codigo, 10);
        cin.ignore();
        fflush(stdin);
        cout << "Digite o fabricante do produto: ";
        cin.getline(produto[i].fabricante, 30);
        cin.ignore();
        fflush(stdin);
        cout << "Digite a data de fabricacao do produto (dd/mm/aaaa): ";
        cin.getline(produto[i].data, 11);
        cin.ignore();
        fflush(stdin);
        cout << "Digite a data de validade do produto (dd/mm/aaaa): ";
        cin.getline(produto[i].validade, 11);
        cin.ignore();
        fflush(stdin);
        cout << "Digite o preco do produto: ";
        cin >> produto[i].preco;
        cin.ignore();
        fflush(stdin);
        cout << endl;
    }
    cout << "Produtos cadastrados com sucesso! " << endl;

    for(int i = 0; i<NPROD; i++){
        cout << "Nome: " << produto[i].nome << endl;
        cout << "Codigo: " << produto[i].codigo << endl;
        cout << "Fabricante: " << produto[i].fabricante << endl;
        cout << "Data de fabricacao: " << produto[i].data << endl;
        cout << "Data de validade: " << produto[i].validade << endl;
        cout << "Preco: R$" << produto[i].preco << endl;
        cout << endl;
    }
}