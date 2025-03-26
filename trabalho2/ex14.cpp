// João Papo-de-Pescador, homem de bem, comprou um microcomputador
// para controlar o rendimento diário de seu trabalho.
// Toda vez que ele trouxer um peso de peixes maior que o previsto pelo regulamento de pesca
// do estado de São Paulo (50 quilos) deverá pagar uma multa de R$ 4,00 por quilo excedente.
// João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
// Gravar na variável excesso a quantidade de quilos além do limite e na multa variável o valor da multa
// que João deverá pagar. Imprima os dados do programa com as mensagens apropriadas.

#include <iostream>;
#include <iomanip>;

main()
{

    float peso, excedente, multa;
    multa = 0.0;
    excedente = 0.0;

    std::cout << "Insira o peso do peixe: ";
    std::cin >> peso;

    if (peso > 50.0)
    {
        excedente = peso - 50.0;
    }

    multa = excedente * 4.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "O peso do peixe e de: " << peso << "kgs, o excedente e de: " << excedente << "kgs e  multa a ser paga e de: R$" << multa;

    return 0;
}