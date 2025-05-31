#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream arquivo_leitura;
    string nome;
    arquivo_leitura.open ("nome.txt");

    if(arquivo_leitura.is_open()){
        while(!arquivo_leitura.eof()){
            getline(arquivo_leitura, nome);
            cout << nome << endl;
        }
    } else {
        cout << "Erro ao abrir o arquivo de texto!";
        
    }

    return 0;
}