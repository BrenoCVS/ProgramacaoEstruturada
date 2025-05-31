//Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal,
//espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono). 
//O programa deve solicitar os dados de N PETs. Mostre na tela todos os cadastros.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Dono {
    string nome;
    string rg;
    string telefone;
};

struct Pet {
    string nomeAnimal;
    string especie;
    string raca;
    string sexo;
    int idade;
    Dono dono;
};

int main() {
    int n;
    cout << "Quantos pets deseja cadastrar? ";
    cin >> n;
    cin.ignore(); 

    vector<Pet> pets;

    for (int i = 0; i < n; i++) {
        Pet pet;

        cout << "\nCadastro do PET #" << i + 1 << endl;

        cout << "Nome do animal: ";
        getline(cin, pet.nomeAnimal);

        cout << "Especie: ";
        getline(cin, pet.especie);

        cout << "Raca: ";
        getline(cin, pet.raca);

        cout << "Sexo: ";
        getline(cin, pet.sexo);

        cout << "Idade: ";
        cin >> pet.idade;
        cin.ignore(); // Limpar o buffer

        cout << "Nome do dono: ";
        getline(cin, pet.dono.nome);

        cout << "RG do dono: ";
        getline(cin, pet.dono.rg);

        cout << "Telefone do dono: ";
        getline(cin, pet.dono.telefone);

        pets.push_back(pet);
    }

    // Exibir todos os cadastros
    cout << "\n=== Lista de PETs Cadastrados ===\n";
    for (int i = 0; i < pets.size(); i++) {
        cout << "\nPET #" << i + 1 << endl;
        cout << "Nome do animal: " << pets[i].nomeAnimal << endl;
        cout << "Especie: " << pets[i].especie << endl;
        cout << "Raca: " << pets[i].raca << endl;
        cout << "Sexo: " << pets[i].sexo << endl;
        cout << "Idade: " << pets[i].idade << " anos" << endl;
        cout << "Nome do dono: " << pets[i].dono.nome << endl;
        cout << "RG do dono: " << pets[i].dono.rg << endl;
        cout << "Telefone do dono: " << pets[i].dono.telefone << endl;

        arquivo << endl:


    }

    arquivo.close();

    return 0;
}


