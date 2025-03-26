#include <iostream>

main()
{
    int idade;

    std::cout << "Insira sua idade: ";
    std::cin >> idade;

    if (idade >= 18)
    {
        std::cout << " Voce e maior de idade";
    }
    else
    {
        std::cout << "Voce e menor de idade";
    }
}