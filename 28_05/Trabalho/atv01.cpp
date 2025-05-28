//Escreva um programa em C++ para armazenar 10 números em um vetor. 
//Imprima os números do vetor. Calcule e imprima a soma desses números. 

#include <iostream>
using namespace std;
int main() {
    int array[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        soma += array[i];
    }

    cout << "Os numeros digitados foram: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " - ";
    }
    cout << endl;

    cout << "A soma dos numeros digitas foi: " << soma << endl;

    return 0;
}