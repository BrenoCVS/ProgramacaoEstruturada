// Faça um Programa que pergunta quanto você ganha por hora e o número de horas trabalhadas no mês.
// Calcule e mostre o total do seu salário no referido mês.

#include <iostream>;
#include <iomanip>;

main()
{
    float sal, hrs, sal_total;

    std::cout << "Informe quanto o funcionario ganha por hora: ";
    std::cin >> sal;

    std::cout << "Informe quantas horas o funcinario trabalhou: ";
    std::cin >> hrs;

    sal_total = sal * hrs;

    std::cout << " O salario do funcionario sera de: " << sal_total;
    return 0;
}