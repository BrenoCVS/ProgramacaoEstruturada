//Escrever um programa em C++ para calcular o IMC de uma pessoa 
//(utilize função para fazer o programa). IMC = peso / altura2.

#include <iostream>
#include <cmath>
using namespace std;

float imc(float peso, float altura){
  
  float result = peso / (pow(altura, 2));

  return result;
}

int main(){

  float peso, altura;

  cout << "Informe o seu peso: ";
  cin >> peso;

  cout << "Informe a sua altura: ";
  cin >> altura;

  cout << "O seu IMC e: " << imc(peso, altura) << endl;


}
