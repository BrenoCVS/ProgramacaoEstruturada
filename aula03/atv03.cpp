// Faça um programa em C++ que pergunte um valor em graus Fahrenheit
//  e imprime na tela o correspondente em Celsius usando a seguinte fórmula:
//	 					Celsius = (fahrenheit – 32) * (5.0/9.0).
// OBS: Usar uma variável double ou float para ler o valor em Fahrenheit

#include <iostream>;
#include <iomanip>;

int main()
{

    float f, c;

    std::cout << "Insira a temperatura em gaus Fahrenheit: ";
    std::cin >> f;

    c = (f - 32) * (5.0 / 9.0);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A temperatura em graus Celsius: " << c << "." << std::endl;
    return 0;
}