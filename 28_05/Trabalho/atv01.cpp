//Escreva um programa em C++ para armazenar 10 números em um vetor. 
//Imprima os números do vetor. Calcule e imprima a soma desses números.

#include <iostream>
using namespace std;

int main(){
    int numeros[10];
    int soma = 0;
    cout << "Digite 10 numeros:" << endl;
    
    for (int cont = 0; cont < 10; cont++){
        cout << "Insira o numero " << cont + 1 << ": ";
        cin >> numeros[cont];
        soma += numeros[cont];
    }

    cout << "Os numeros digitados sao: ";
    for(int cont = 0; cont < 10; cont++){
        cout << numeros[cont] << " - "; 
    }

    cout << endl;
    cout << "A soma dos valoeres é: " << soma << endl;

}