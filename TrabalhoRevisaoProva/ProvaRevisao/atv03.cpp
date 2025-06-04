#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Informe o tamanho da matriz: ";
    cin >> tamanho;

    int matriz[tamanho][tamanho]; 


    for (int j = 0; j < tamanho; j++) {
        for (int i = 0; i < tamanho; i++) {
            cout << "Digite um valor para a posicao " << j + 1 << ", " << i + 1 << ": ";
            cin >> matriz[j][i];  
        }
    }

    
    cout << "\nOs valores da matriz são:\n";
    for (int j = 0; j < tamanho; j++) {
        for (int i = 0; i < tamanho; i++) {
            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }

    
    cout << "\nMatriz sem a primeira linha e primeira coluna:\n";
    for (int j = 1; j < tamanho; j++) {        
        for (int i = 1; i < tamanho; i++) {    
            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }

    return 0;
}

