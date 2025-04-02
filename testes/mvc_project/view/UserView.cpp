#include "userView.h"

std::string UserView::getNome()
{
    std::string nome_user;
    std::cout << "Insira o nome do usuario: ";
    std::getline(std::cin, nome_user);
    return nome_user;
}

int UserView::getIdade()
{
    int idade_user;
    std::cout << "Insira a idade do usuario: ";
    std::cin >> idade_user;
    return idade_user;
}

void UserView::displayUser(const std::string &nome, int idade)
{
    std::cout << "Nome de usuário: " << nome << std::endl;
    std::cout << "Idade do usuário: " << idade << std::endl;
}