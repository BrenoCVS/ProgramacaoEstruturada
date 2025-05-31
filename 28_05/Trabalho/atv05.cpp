//Escreva um programa em C++  que seja capaz de criar um vetor contendo os seguintes números, nessa ordem: 10,9,8,7,6,5,4,3,2,1. Exiba o vetor e também a ordem inversa desse vetor.

#include <iostream>
using namespace std;

int main(){

  int numeros[] = {10,9,8,7,6,5,4,3,2,1};

  cout << "Os valores do vetor sao: " << endl;
  for(int cont = 0; cont < 10; cont++){
    cout << numeros[cont] << " - ";
  }

  cout << endl;

  cout << "Os valores do vetor na ordem inversa sao: " << endl;
  for(int cont = 9; cont >= 0; cont--){
    cout << numeros[cont] << " - ";
  }
  cout << endl;

  return 0;
}
