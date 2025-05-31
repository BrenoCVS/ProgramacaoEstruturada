//Escreva um programa em C++ que receba do usuário números reais e preencha uma matriz 4x5. Gere e armazene em uma outra matriz a metade da primeira (a metade de cada número armazenado na matriz original). Imprima as duas matrizes.

#include <iostream>
using namespace std;

int main(){
  
  float matriz[4][5];
  float resultante[4][5];

  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 5; i++){
      cout << "Informe o numero da posicao " << j + 1 << ", " << i + 1 << ": " << endl;
      cin >> matriz[j][i];
    }
  }

  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 5; i++){
      resultante[j][i] = matriz[j][i] / 2.0;    
    }
  }

  cout << "Os valores da matriz sao: " << endl;
  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 5; i++){
      cout << matriz[j][i] << "\t";
    }
    cout << endl;
  }
  
  cout << "A matriz com valores resultantes: " << endl;
  for(int j = 0; j < 4; j++){
    for(int i = 0; i < 5; i++){
      cout << resultante[j][i] << "\t";
    }
    cout << endl;
  }

  return 0;
}
