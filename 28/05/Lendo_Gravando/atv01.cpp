#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream arquivo;
    string nome, resp;

    arquivo.open("nome.txt", ios::out | ios::app);

    if(arquivo.is_open()){
        for(int cont = 0; cont < 6; cont++){
            cout << "Digite o " << cont + 1<< " nome: ";
            cin >> nome;
            arquivo << nome << endl;

            
        }
        cout << "Gravacao bem sucedida" << endl;
        
        arquivo.close();
    } else{
        cout << "Erro ao abrir arquivo" << endl;
        return 0;
    }
    arquivo.open("nome.txt", ios::in);
    if(arquivo.is_open()){
        while(!arquivo.eof()){
            getline(arquivo, nome);
            cout << nome << endl;
        }
    } else {
        cout <<"Erro ao abrir arquivo" << endl;
        return 0;
    }

    return 0;
}