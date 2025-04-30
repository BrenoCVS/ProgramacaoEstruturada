// Elabore um algoritimo para gerar duas matrizer MxN e mostrar a matriz soma

#include <iostream>
using namespace std;

int main()
{

    int n, m;

    cout << "Insira o numero de linhas das matrizes: ";
    cin >> m;

    cout << endl;

    cout << "Insira o numero de colunas das matrizes: ";
    cin >> n;

    int matriz[m][n];
    int matriz2[m][n];
    int matriz3[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] na primeria matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] na segunda matriz: ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
            cout << "   " << matriz3[i][j];
        }
        cout << endl;
    }

    return 0;
}