//Escreva um programa em C++ que receba números e os armazene em uma matriz 4X4. Imprima a matriz.

#include <iostream>
using namespace std;

int main(){
    
  int matriz[4][4];

  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 4; i++){
      cout << "Digite um numero para a posicao " << j + 1 << ", " << i + 1 << ": " << endl;
      cin >> matriz[j][i];
    }
  } 


  cout << "Os valores da matriz sao: " << endl;
  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 4; i++){
      cout << matriz[j][i] << "\t";
    }
    cout << endl;
  }

  return 0;
}
