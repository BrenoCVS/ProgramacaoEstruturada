// Faça um programa em C++ que peça o nome de uma pessoa,
// a quantidade de quilômetros que ela andou de bicicleta e o tempo gasto em minutos para percorrer essa distância.
// Mostre na tela uma mensagem como: “Olá Mário, você percorreu 30 km em 65 minutos, sua velocidade média foi: 27.7.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string nome;
    float distancia, tempo, vm;

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Insira quilometros voce andou de bicicleta: ";
    std::cin >> distancia;

    std::cout << "Insira quantos minutos voce levou para percorrer esta distância: ";
    std::cin >> tempo;

    vm = distancia / (tempo / 60);

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Ola " << nome << ", voce percorreu " << distancia << "km em " << tempo << " minutos, sua velocidade media foi: " << vm << "." << std::endl;

    return 0;
}
