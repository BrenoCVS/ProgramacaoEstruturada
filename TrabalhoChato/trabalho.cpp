#include <iostream>
#include <string>
#include <locale>
#include <cctype>
using namespace std;

void testeResposta(char resposta);
void insistir();
void concordou();
void comoEsta(int opcao);
void bem();
void mal();

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Variaveis Globaiss
    char resposta;

    cout << "\nOlá, eu gostaria de conversar com voce, mas gostadia de fazer isto rimando, tudo bem (S/N)? " << endl;
    cin >> resposta;
    testeResposta(toupper(resposta));
    return 0;
}
void testeResposta (char resposta){


    switch (resposta)
    {
    case 'S':
        concordou();
        break;
    case 'N':
        insistir();
        break;
    default:
        cout << "\nCódigo inválido!!";
        main();
        break;
    }
}

void insistir(){
    char resposta;
    cout << "\nAh vai, por favor, eu só quero mandar umas rimas legais. Voce deixa (S/N)? " << endl;
    cin >> resposta;

    testeResposta(toupper(resposta));
}

void concordou(){
    int opcao;
    cout << "Tzná bom, meu irmão, então vamo lá,";
    cout << "\n O que você tá achando da minha rima, me fala já?";
    cout << "\nDigite 1 para mal, e 2 para bem, sem errar!" << endl;
    cin >> opcao;

    comoEsta(opcao);
}

void comoEsta(int opcao){
    if(opcao == 1){
        mal();
    } else if (opcao == 2){
        bem();
    } else {
        cout << "\nCodigo invalido irmão, tenta denovo ai.";
        concordou();
    }
}

void bem(){
    string nome;
    cout << "\nQue bom que cê tá curtindo minha rima, maninho,";
    cout << "\nSAgora manda teu nome pra mim, meu irmãozinho!" << endl; 
    cin >> nome;


}

void mal(){
    int opcao;
    cout << "\nComo assim não tá curtindo a minha rima?";
    cout << "\nVou te perguntar de novo, na mesma batida e clima!";
    cout << "\nTa curtindo a minha rima? " << endl;
    cin >> opcao;

    comoEsta(opcao);
}