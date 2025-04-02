#include "model/UserModel.h"
#include "view/userView.h"
#include "controller/UserController.h"
#include <iostream>
#include <string>

int main()
{
    UserView view;

    std::string nome = view.getNome();
    int idade = view.getIdade();
    UserModel user(nome, idade);
    UserController controller(user, view);

    controller.setNomeUsuario(nome);
    controller.setIdadeUsuario(idade);
    controller.updateView();

    return 0;
}