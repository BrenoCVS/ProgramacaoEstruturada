//Fazer um programa para a partir de uma temperatura em Fahrenheit, 
//apresentar a temperatura equivalente em Célsius. 
//OBS: Deverá ser criado um protótipo e uma função para gerar a 
//temperatura em Célsius, essa função será chamada na main().

#include <iostream>
using namespace std;

float conversor(float f) {
    return (f - 32) * 5.0 / 9.0;
}
int main() {
    float f;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> f;

    float c = conversor(f);
    cout << "Temperatura em Celsius: " << c << "°C" << endl;

    return 0;
}