#include <iostream>
using namespace std;


int main(){
  
  int vetor1[10], vetor2[10];


  cout << "Digite os valores do vetor 1: " << endl;
  for(int cont = 0; cont < 10; cont++){
    cout << "Digiteite o valor da posicao " << cont + 1 << ": ";
    cin >> vetor1[cont];

  }

  cout << "Digite os valores do vetor 2: " << endl;
  for(int cont = 0; cont < 10; cont++){
    cout << "Digite o valor da posicao " << cont + 1<< ": ";
    cin >> vetor2[cont];
  }

  cout << "O novo vetor con os valores intercalados sera: " << endl;
  for(int cont = 0; cont < 10; cont++){

    cout << vetor1[cont] << "\t" << vetor2[cont] << "\t";
  }
  return 0;
}
