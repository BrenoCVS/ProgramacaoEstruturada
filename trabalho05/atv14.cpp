// A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes,
// coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
// • média do salário da população;
// • média do número de filhos;
// • maior salário;

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    float salario, media_salario = 0, maior_salario = 0;
    int filhos, media_filhos = 0, num_populacao = 0, salario_total = 0, filhos_total = 0;

    for (int cont = 1; cont <= 15; cont++)
    {
        cout << "Insira o " << cont << " salario: ";
        cin >> salario;
        cout << "Insira o " << cont << " numero de filhos: ";
        cin >> filhos;

        salario_total += salario;
        filhos_total += filhos;

        if (cont == 1)
        {
            maior_salario = salario;
        }
        else
        {
            if (salario > maior_salario)
            {
                maior_salario = salario;
            }
        }
    }

    media_salario = salario_total / 15;
    media_filhos = ceil(filhos_total / 15);

    cout << fixed << setprecision(1);
    cout << "A media do salario da populacao e: " << media_salario << endl;
    cout << "A media do numero de filhos da populacao e: " << media_filhos << endl;
    cout << "O maior salario da populacao e: " << maior_salario << endl;
    return 0;
}