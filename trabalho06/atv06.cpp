#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Informe um numero para que seja apresentada a Tabuada: ";
    cin >> num;
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
    return 0;
}