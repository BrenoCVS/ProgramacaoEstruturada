// Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve
// calcular a média alcançada por aluno e apresentar: A mensagem "Aprovado", se a média
// alcançada por maior ou igual a sete; A mensagem "Reprovado", se a mídia for menor do que sete;
// A mensagem "Aprovado com Distinção", se a média for igual a dez.

#include <iostream>;

main()
{

    float nota, total_nota, media;
    nota = 0.0;
    total_nota = 0.0;
    media = 0.0;

    for (int cont = 1; cont <= 2; cont++)
    {
        std::cout << " Insira a nota " << cont << ": ";
        std::cin >> nota;

        total_nota += nota;
    }

    media = total_nota / 2;

    if (media == 10.0)
    {
        std::cout << " Aluno aprovado com distinção!";
    }
    else if (media >= 7.0)
    {
        std::cout << " Aluno aprovado.";
    }
    else
    {
        std::cout << " Aluno reprovado.";
    }

    return 0;
}