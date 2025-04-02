// Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir,
// multiplicar ou sair do programa.
// ◦ Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma.
// ◦ Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração.
// ◦ Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão.
// ◦ Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o
//  resultado da multiplicação.
// ◦ Se o usuário quiser sair do programa informará tal opção (S).
// ◦ Para qualquer outro caso o computador deverá informar (Opção inválida).

#include <iostream>
#include <string>

int main()
{

    char op;
    int num1, num2;
    float result;

    while (op != 's')
    {
        std::cout << "Qual a operacao: " << std::endl;
        std::cout << " Soma (+)" << std::endl;
        std::cout << " Subtracao (-)" << std::endl;
        std::cout << " Divisao (/)" << std::endl;
        std::cout << " Multiplicacao (*)" << std::endl;
        std::cout << " Para encerrar digite s" << std::endl;
        std::cin >> op;
        if (op != 's')
        {
            std::cout << "Insira o primeiro numero: ";
            std::cin >> num1;
            std::cout << "Insira o segundo numero: ";
            std::cin >> num2;

            switch (op)
            {
            case '+':
                result = num1 + num2;
                std::cout << "Resultado: " << result << std::endl;
                break;

            case '-':
                result = num1 - num2;
                std::cout << "Resultado: " << result << std::endl;
                break;

            case '/':

                result = num1 / num2;
                std::cout << "Resultado: " << result << std::endl;
                break;
                break;

            case '*':
                result = num1 * num2;
                std::cout << "Resultado: " << result << std::endl;
                break;

            default:
                std::cout << "Opcao invalida!" << std::endl;
            }
        }
        else
        {

            std::cout << "Fim da execucao1";
        }
    }
}