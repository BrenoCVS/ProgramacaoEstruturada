#include <iostream>
using namespace std;

int main()
{
    int notas[5], media = 0, i;

    for (i = 0; i < 5; i++)
    {
        cout << "Digite a nota do aluno " << (i + 1) << ": " << endl;
        cin >> notas[i];
        media += notas[i];
    }

    cout << "\nMedia das notas: " << (media / 5) << endl;
    return 0;
}