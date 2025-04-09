//    8. Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino),
// construa um programa que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas:
//- para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
//- para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
// Exiba as informações incluindo o peso ideal.

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    char sexo;
    float altura, pesoIdeal;

    cout << "Informe sua altura (em centimetros): ";
    cin >> altura;

    cout << "Informe seu sexo (M/F): ";
    cin >> sexo;

    sexo = toupper(sexo);

    cout << fixed << setprecision(2);
    if (sexo == 'M')
    {
        pesoIdeal = (72.7 * altura) - 58;
        cout << "Masculino" << endl;
        cout << "Altura: " << altura << endl;
        cout << "Seu peso ideal eh: " << pesoIdeal;
    }
    else if (sexo == 'F')
    {

        pesoIdeal = (62.1 * altura) - 44.7;
        cout << "Feminino" << endl;
        cout << "Altura: " << altura << endl;
        cout << "Seu peso ideal eh: " << pesoIdeal;
    }
    else
    {
        cout << "Sexo invalido";
    }
}