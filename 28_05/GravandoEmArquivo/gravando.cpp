#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream arquivo;

    arquivo.open("gravando.txt"); // Reescreve o arquivo se já existir
    // arquivo.open("gravando.txt", ios::app); Abre o arquivo para adicionar conteúdo no final

    if(arquivo.is_open()){
        cout << "Gravação bem sucedida" << endl;
        arquivo << "Breno" << endl;
    } else {
        cout << "Erro ao abrir arquivo" << endl;
    }
    arquivo.close();

    return 0;
}