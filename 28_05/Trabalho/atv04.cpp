//Escreva um programa em C++  para armazenar notas das P1 e P2 de 15 alunos (2 vetores). Calcular a média e armazenar em outro vetor. Verificar também a situação do aluno (Aprovado ou Reprovado). Imprimir as notas, a média e situação de cada aluno.

#include <iostream>
using namespace std;

int main() {
  int p1[15], p2[15];
  float medias[15]; // vetor para armazenar médias

  for (int cont = 0; cont < 15; cont++) {
    cout << "Digite a p1 do aluno " << cont + 1 << ": ";
    cin >> p1[cont];

    cout << "Digite a p2 do aluno " << cont + 1 << ": ";
    cin >> p2[cont];

    medias[cont] = (p1[cont] + p2[cont]) / 2.0;

    cout << endl;
  }

  cout << "Situacao dos alunos:\n";
  for (int cont = 0; cont < 15; cont++) {
    cout << "Aluno " << cont + 1 << " P1: " << p1[cont]
         << ", P2: " << p2[cont] << endl;

    cout << "Media: " << medias[cont] << endl;

    if (medias[cont] >= 6.0) {
      cout << "Aprovado\n";
    } else {
      cout << "Reprovado\n";
    }
    cout << endl;
  }

  return 0;
}

