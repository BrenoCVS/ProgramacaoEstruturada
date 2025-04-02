#include "UserController.h"

UserController::UserController(UserModel &m, UserView &v) : model(m), view(v) {}

void UserController::setNomeUsuario(std::string nome) { model.setNome(nome); }
void UserController::setIdadeUsuario(int idade) { model.setIdade(idade); }
void UserController::updateView()
{
    view.displayUser(model.getNome(), model.getIdade());
}