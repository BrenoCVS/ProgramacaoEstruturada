#include <iostream>
using namespace std;

int main()
{
    int num, maior, menor;

    for (int i = 1; i <= 50; i++)
    {

        cout << "Insira o " << i << " numero: ";
        cin >> num;

        if (i == 1)
        {
            maior = num;
            menor = num;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
            else if (num < menor)
            {
                menor = num;
            }
        }
    }

    cout << "O maior numero digitado foi: " << maior << endl;
    cout << "O menor numero digitado foi: " << menor << endl;

    return 0;
}