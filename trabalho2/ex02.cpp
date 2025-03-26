// Faça um programa que pede um numero e mostra a mensagem "O numero digitado foi [numero digitado]"
#include <iostream>;

main()
{

    int num;

    std::cout << "Insira um numero: ";
    std::cin >> num;

    std::cout << "O numero informado foi " << num;

    return 0;
}