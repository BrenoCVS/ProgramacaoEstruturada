//Fazer um programa para calcular a divisão entre dois números inteiros. 
//OBS: Deverá ser criada uma função para gerar o resultado da divisão, 
//essa função será chamada na main().

#include <iostream>
using namespace std;

int divisao(int a, int b) {
    if (b == 0) {
        cout << "Erro: Divisao por zero!" << endl;
        return 0;
    }
    return a / b;
}

int main(){
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    int resultado = divisao(num1, num2);
    if (num2 != 0) {
        cout << "Resultado da divisao: " << resultado << endl;
    }
    return 0;
}
