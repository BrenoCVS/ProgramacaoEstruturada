#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nome;
    ofstream arquivo;

    arquivo.open("nomes.txt", ios::app);

    for(int cont = 0; cont<6; cont++ ){
        cout << "Escreca o " << cont + 1 << " nome: ";
        cin >> nome;

        arquivo << nome << endl;

    }

    arquivo.close();


    return 0;
}
