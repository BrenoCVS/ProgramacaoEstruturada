//Escreva um programa em C++  para armazenar 8 números em um vetor
//e imprimir todos os números. Verifique quantos desses números
//são múltiplos de 3. Imprima essa quantidade.
#include <iostream>
using namespace std;

int main(){

	int numeros[8], multiplos = 0;

	for(int cont = 0; cont < 8; cont++){
	
		cout << "Digite o numero " << cont + 1 << ": ";
		cin >> numeros[cont];
	}

	cout << "Os numeros digitados foram: ";

	for(int cont = 0; cont < 8; cont++){

		cout << numeros[cont] << " - ";

		if(numeros[cont] % 3 == 0){
			multiplos++;
		}
	}

	cout << endl;
	cout << "Foram digitados " << multiplos << " numeros multiplos de 3" << endl;
}
