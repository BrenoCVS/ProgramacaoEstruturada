// Você se tornou programador C++, e agora está ganhando super bem.
// Mas, mesmo assim, vai ter que pagar impostos.
// Crie um software que recebe o valor do seu salário e calcula os 7% do imposto de renda.
// A saída do seu programa deve ser o salário bruto (sem abatimento),
// o tanto de imposto que vai pagar e o seu salário líquido (após descontar o IR).

#include <iostream>;

main()
{

    float sal, imposto, sal_liq;

    std::cout << " Informe o salario bruto: ";
    std::cin >> sal;

    imposto = (7.0 / 100) * sal;
    sal_liq = sal - imposto;

    std::cout << " O salario bruto e: " << sal;
    std::cout << " O valor do imposto e: " << imposto;
    std::cout << " O salario liquido e: " << sal_liq;
}