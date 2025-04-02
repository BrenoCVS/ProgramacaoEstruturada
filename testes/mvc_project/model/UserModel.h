#ifndef USERMODEL_H
#define USERMODEL_H

#include <string>

class UserModel
{
private:
    std::string nome;
    int idade;

public:
    UserModel(std::string nome, int idade);

    std::string getNome() const;
    int getIdade() const;

    void setNome(std::string novoNome);
    void setIdade(int novaIdade);
};

#endif