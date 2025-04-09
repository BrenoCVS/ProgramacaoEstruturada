// Programa para apresentar a media de 10 notas
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float media = 0.0, total = 0.0, nota;

    for (int cont = 1; cont <= 10; cont++)
    {

        cout << "Insira a " << cont << " nota: ";
        cin >> nota;

        total += nota;
    }

    media = total / 10;

    cout << std::fixed << std::setprecision(1);

    cout << "A media das notas e: " << media;

    return 0;
}