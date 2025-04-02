#include "UserModel.h"

UserModel::UserModel(std::string nome, int idade) : nome(nome), idade(idade) {}

std::string UserModel::getNome() const { return nome; }
int UserModel::getIdade() const { return idade; }

void UserModel::setNome(std::string novoNome) { nome = novoNome; }
void UserModel::setIdade(int novaIdade) { idade = novaIdade; }