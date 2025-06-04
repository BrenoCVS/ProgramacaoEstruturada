//Faça um sistema que receba dois numeros e mostre o menor deles, deve ser usado funcao e prototipo;

#include <iostream>
using namespace std;

int menor(int, int);

int main (){

  int numero1, numero2;

  cout << "Iforme o primeiro numero: ";
  cin >> numero1;

  cout << endl;

  cout << "informe o segundo numero: ";
  cin >> numero2;

  cout << "O menor numero digitado foi " <<menor(numero1, numero2) <<"."   ;
}

int menor (int num1, int num2){

  if(num1 <= num2){
    return num1;
  } else {
      return num2;
    }
}
