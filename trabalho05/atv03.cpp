// Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área
// e perímetro. Fórmulas:  perímetro =  2 pi r
//  onde r é o raio e pi vale 3.14, ou pode ser obtido através da biblioteca
//  (cmath), utilizando a constante M_PI.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    float raio, area, perimetro;

    cout << " Informe o raio da circunferencia: ";
    cin >> raio;

    perimetro = 2 * M_PI * raio;
    area = M_PI * std::pow(raio, 2);

    cout << std::fixed << std::setprecision(2);
    cout << "O perimetro da circunferencia e: " << perimetro << endl;
    cout << "O raio da circunferencia e: " << area << endl;
}