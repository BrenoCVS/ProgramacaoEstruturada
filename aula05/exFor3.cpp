#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (int cont = 3; cont <= 100; cont += 3)
    {
        cout << setw(5) << cont << setw(10) << " = " << setw(15) << "3 x " << cont / 3 << endl;
    }

    return 0;
}
