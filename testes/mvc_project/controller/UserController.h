#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include "../model/UserModel.h"
#include "../view/userView.h"

class UserController
{

private:
    UserModel &model;
    UserView &view;

public:
    UserController(UserModel &m, UserView &v);

    void setNomeUsuario(std::string nome);
    void setIdadeUsuario(int idade);
    void updateView();
};

#endif