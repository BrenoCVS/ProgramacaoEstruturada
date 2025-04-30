// elabore um algoritimo que receba os numeros de uma matriz MxM e imprima aomente a diagonal principal
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Insira o tamanho da matriz: ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "   " << matriz[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}