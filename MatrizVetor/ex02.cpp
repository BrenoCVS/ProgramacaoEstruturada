#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    char vetor[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Digite uma letra: ";
        cin >> vetor[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << "\nA letra armazenada na posicao " << i << " do vetor e: " << vetor[i] << endl;
    }

    cout << "O vetor armzena as letras: " << vetor << endl;
    cout << "A segunda posicao do vetir armazena a letra: " << vetor[1] << endl;

    return 0;
}
