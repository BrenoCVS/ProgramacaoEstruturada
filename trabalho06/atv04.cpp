#include <iostream>
#include <string>
using namespace std;

int main()
{
    string senha;
    cout << "Digite sua senha: " << endl;
    cin >> senha;
    if (senha == "1234")
    {
        cout << "ACESSO PERMITIDO." << endl;
    }
    else
    {
        cout << "ACESSO NEGADO." << endl;
    }

    return 0;
}