// Escreva um programa para determinar o maior de tres numeros dados

#include <iostream>;

main()
{
    int num, maior_num;
    num = 0;
    maior_num = 0;

    for (int cont = 1; cont <= 3; cont++)
    {

        std::cout << "Informe o " << cont << " numero: ";
        std::cin >> num;

        if (cont == 1)
        {
            maior_num = num;
        }
        if (num >= maior_num)
        {
            maior_num = num;
        }
    }

    std::cout << "O maior numero digitado foi: " << maior_num;

    return 0;
}