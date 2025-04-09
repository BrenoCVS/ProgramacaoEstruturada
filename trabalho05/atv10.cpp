// Escrever um programa que lê o número de identificação de um aluno (matrícula),
//  3 notas (0 até 10) obtidas nas atividades da disciplina. Calcular a média de aproveitamento, usando a fórmula:

// A atribuição de conceitos obedece a tabela abaixo:
// Média de Aproveitamento      |      Conceito
//>=9,0                                   A
// 7,5 e < 9,0                             B
// 6,0 e < 7,5                             C
// 4,0 e < 6,0                             D
//< 4,0                                   E

// O programa deve escrever o número do aluno (matrícula), suas notas,
// a média de aproveitamento e o conceito correspondente. De acordo com o conceito exiba
// a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int matricula, nota = 0, total = 0;

    cout << "Insira a matricula do aluno: " << endl;
    cin >> matricula;

    for (int cont = 1; cont <= 3; cont++)
    {
        cout << "Insira a " << cont << " nota: " << endl;
        cin >> nota;
        total += nota;
    }

    float media = total / 3;
    cout << fixed << setprecision(1);
    cout << "Matricula do aluno: " << matricula << endl;
    cout << "A media do aluno foi: " << media << endl;

    if (media >= 9.0)
    {
        cout << "O conceito do aluno foi A" << endl;
    }
    else if (media >= 7.5 && media < 9.0)
    {
        cout << "O conceito do aluno foi B" << endl;
    }
    else if (media >= 6.0 && media < 7.5)
    {
        cout << "O conceito do aluno foi C" << endl;
    }
    else if (media >= 4.0 && media < 6.0)
    {
        cout << "O conceito do aluno foi D" << endl;
    }
    else
    {
        cout << "O conceito do aluno foi E" << endl;
    }
}