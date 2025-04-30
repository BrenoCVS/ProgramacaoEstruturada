#include <iostream>
using namespace std;

int main()
{

    int vetor[5], i;

    for (i = 0; i < 5; i++)
    {
        cout << "Digite um valor para armazenar na posicao" << i << " do vetor: ";
        cin >> vetor[i];
    }

    return 0;
}
