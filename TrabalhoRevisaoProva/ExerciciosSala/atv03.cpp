//Faça um programa que leia dez numeros e mostre na orme invertida


#include <iostream>
#include <string>
using namespace std;

int main(){

  float vetor[10];

  for(int cont = 0; cont < 10; cont++){
    cout <<"Digite o valor da posicao " << cont + 1 << ": ";
    cin.ignore();
    cin >> vetor[cont];
    cout << endl;
  }

  cout << "Os valores na ordem invertida sao: " << endl;
  for(int cont = 9; cont >= 0; cont--){
    cout << vetor[cont] << "\t";
  }
}
