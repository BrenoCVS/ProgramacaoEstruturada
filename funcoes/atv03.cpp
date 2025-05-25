//Pesquisar o que é uma função recursiva e fazer um programa para calcular 
//o fatorial de um número qualquer. 

#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}
int main() {
    int n;

    cout << "Digite um numero para calcular o fatorial: ";
    cin >> n;
    
    int r = fatorial(n);
    cout << "Fatorial de " << n << " é: " << r << endl;
    

    return 0;
}