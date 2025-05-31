//Escreva um programa em C++ para receber números para preencher
//dois vetores de tamanho 10. Imprima os vetores. Faça a multiplicação 
//de um por outro e imprima o resultado da multiplicação.

#include <iostream>
using namespace std;

int main(){

	int numeros1[10], numeros2[10];

	for (int cont = 0; cont < 10; cont++){

		cout << "Digite o numero " << cont + 1 << " do vetor numero 1: ";
		cin >> numeros1[cont];
	}

	for (int cont = 0; cont < 10; cont++){

		cout << "Digite o numero " << cont +1 << " do vetor numero2: ";
		cin >> numeros2[cont];
	}
	cout << endl;

	cout << "A multiplicacao dos vetores e: ";

	for (int cont = 0; cont < 10; cont++){

		cout << numeros1[cont] * numeros2[cont] << " - "; 
	}
	cout << endl;	
}
