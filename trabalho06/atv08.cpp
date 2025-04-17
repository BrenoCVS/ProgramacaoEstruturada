#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int num;
    string opcao;

    cout << "Voce deseja imprimir uma tabuada? " << endl;
    cout << "Digite: (S - para SIM) ou (N - para NAO): " << endl;
    cin >> opcao;
    opcao = toupper(opcao[0]);

    if (opcao == "S")
    {

        cout << "Informe um numero para que seja apresentada a Tabuada: ";
        cin >> num;

        if (num >= 1 && num <= 9)
        {
            cout << endl;
            cout << endl;
            cout << "Tabuada do " << num << endl;
            cout << "******************" << endl;

            for (int i = 1; i <= 10; i++)
            {
                int res = num * i;
                cout << num << " x " << i << " = " << res << endl;
            }
            cout << "******************" << endl;
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << "Numero invalido" << endl;
        }
    }
    else
    {
    }
    return 0;
}