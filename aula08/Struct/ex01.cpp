#include <iostream>
#include <cstring>
using namespace std;
int main(){
    fflush(stdin);

    int NALUNO = 2;

    struct EstruturaAluno
    {
        char nome[60];
        char matricula[10];
        int anoningresso;
    } strAluno[NALUNO];

    int i;
    
    for(i = 0; i<NALUNO; i++){
        fflush(stdin);
        cout << "Digite o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        fflush(stdin);
        cout << "Digite a matricula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Digite o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoningresso;
        cout << endl;
        fflush(stdin); 
    }

    cout << "Alunos cadastrados com sucesso! " << endl;

    for(i = 0; i<NALUNO; i++){
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Matricula: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso: " << strAluno[i].anoningresso << endl;
        cout << endl;
    }

    return 0;
}