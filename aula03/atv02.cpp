// Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média.
// Após o cálculo, imprima uma mensagem da forma “Aluno Fulano possui média 7.0”

#include <iostream>;
#include <string>;
#include <iomanip>;

int main()
{

    std::string nome;
    float nota, total_nota, media;

    std::cout << "Insira o nome do aluno: ";
    std::getline(std::cin, nome);

    for (int cont = 1; cont <= 3; cont++)
    {
        std::cout << "insira a nota " << cont << ": ";
        std::cin >> nota;

        total_nota += nota;
    }

    media = total_nota / 3;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "O aluno " << nome << " possui nota: " << media << "." << std::endl;

    return 0;
}