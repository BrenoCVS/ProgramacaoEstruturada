#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 
#include <cmath>
#include <fstream>

using namespace std;


struct Pessoa {
    string nome;
    float peso;
    float altura;
};


float calcularIMC(float peso, float altura) {
    return peso / (pow(altura, 2));
}

int main() {
    ofstream arquivo;

    arquivo.open("imcs.txt", ios::app);
    int n;
    cout << "Quantas pessoas deseja calcular o IMC? ";
    cin >> n;

    vector<Pessoa> pessoas(n); 

  
    for (int i = 0; i < n; ++i) {
        cout << "\nPessoa " << i + 1 << endl;

        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, pessoas[i].nome);

        cout << "Peso (kg): ";
        cin >> pessoas[i].peso;

        cout << "Altura (m): ";
        cin >> pessoas[i].altura;
    }


    cout << "\n--- Resultados ---\n";
    for (int i = 0; i < n; ++i) {
        float imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
        cout << fixed << setprecision(2);
        cout << pessoas[i].nome << " tem IMC = " << imc << endl;
        arquivo << pessoas[i].nome << " tem IMC = " << imc << endl;
    }

    arquivo.close();

    return 0;
}


