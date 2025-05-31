//Escreva um programa em C++ que receba números e os armazene
//em uma matriz 6X6. Imprima a matriz e depois imprima também a Diagonal Secundária.

#include <iostream>
using namespace std; 

int main(){

  int matriz[6][6];

  for(int j = 0; j < 6; j++){
    for (int i = 0; i < 6; i++){
      cout << "Informe o valor da posicao " << j + 1 << ", " << i + 1 << ": ";
      cin >> matriz[j][i];
    }
  }

  cout << "Os valores da matriz sao:" << endl;
  for(int j = 0; j < 6; j++){
    for(int i = 0; i < 6; i++){
      cout << matriz[j][i] << "\t";
    }
    cout << endl;
  }

   cout << "\nDiagonal Secundária (posicionada na matriz):" << endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (j == 6 - 1 - i) {
                cout << matriz[i][j] << "\t"; 
            } else {
                cout << "\t"; 
            }
        }
        cout << endl;
    }
} 


