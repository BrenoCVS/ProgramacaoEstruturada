#include "model/UserModel.h"
#include "view/userView.h"
#include "controller/UserController.h"
#include <iostream>
#include <string>

int main()
{
    std::string nome;
    int idade;

    std::cout << "Insira o nome do usuario: ";
    std::cin >> nome;

    std::cout << "Insira a idade do usuario: ";
    std::cin >> idade;

    UserModel user(nome, idade);
    UserView view;
    UserController controller(user, view);

    controller.setNomeUsuario(nome);
    controller.setIdadeUsuario(idade);
    controller.updateView();

    return 0;
}