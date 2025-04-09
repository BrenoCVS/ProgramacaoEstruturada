#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (int cont = 1; cont <= 10; cont++)
    {
        cout << setw(5) << cont << setw(10) << "x6" << setw(15) << cont * 6 << endl;
    }

    return 0;
}
