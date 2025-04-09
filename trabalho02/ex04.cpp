// Faça um Programa que solicite as 4 notas bimestrais de um aluno e mostre sua média na tela.

#include <iostream>;

main()
{

    int nota, total;
    float media;

    media = 0.0;
    nota = 0;
    total = 0;

    for (int cont = 1; cont <= 4; cont++)
    {
        std::cout << "Insira a " << cont << " nota: ";
        std::cin >> nota;

        total += nota;
    }

    media = total / 4;

    std::cout << "A media do aluno foi de: " << media;
    return 0;
}