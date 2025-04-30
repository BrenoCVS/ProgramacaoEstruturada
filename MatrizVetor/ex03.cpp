#include <iostream>
using namespace std;
#define DIN 5

int main()
{
    int vetor[DIN] = {10, 15, 20, 25, 30};
    int vetor1[] = {1, 2, 3, 4, 5, 6, -1};
    int i;

    cout << "Vetor com tamanho pre-definido com define \n";
    for (i = 0; i < DIN; i++)
    {
        cout << "\nVetor na posicao " << i << " = " << vetor[i];
    }

    cout << "\nVetor terminado por -1 \n";
    for (i = 0; vetor1[i] > 0; i++)
    {
        cout << "\nVetor na posicao " << i << " = " << vetor1[i];
    }
}