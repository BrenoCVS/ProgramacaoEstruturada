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
void parceiros(string nome);
void comoAssim();
void repeticao();

int main(){
    setlocale(LC_ALL, "Portuguese");

    char resposta;
 
    //PRIMEIRA PERGUNTA
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
    //SEGUNDA PERGUNTA
    char resposta;
    cout << "\nAh vai, por favor, eu só quero mandar umas rimas legais. Voce deixa (S/N)? " << endl;
    cin >> resposta;

    testeResposta(toupper(resposta));
}

void concordou(){
    int opcao;
    //TERCEIRA PERGUNTA
    cout << "\nTá bom, meu irmão, então vamo lá,";
    cout << "\n O que você tá achando da minha rima, me fala já?";
    cout << "\nDigite 1 para bem, e 2 para mal, sem errar!" << endl;
    cin >> opcao;

    comoEsta(opcao);
}

void comoEsta(int opcao){
    if(opcao == 1){
        bem();
    } else if (opcao == 2){
        mal();
    } else {
        cout << "\nCodigo invalido irmão, tenta denovo ai.";
        concordou();
    }
}

void bem(){
    //QUARTA PERGUNTA
    string nome;
    cout << "\nQue bom que cê tá curtindo minha rima, maninho,";
    cout << "\nAgora manda teu nome pra mim, meu irmãozinho!" << endl; 
    cin >> nome;

    parceiros(nome);

}

void mal(){
    int opcao;
    //QUINTA PERGUNTA
    cout << "\nComo assim não tá curtindo a minha rima?";
    cout << "\nVou te perguntar de novo, na mesma batida e clima!";
    cout << "\nTa curtindo a minha rima (1 - SIM | 2 - NAO)? " << endl;
    cin >> opcao;

    comoEsta(opcao);
}

void parceiros(string nome){

    //SEXTA PERGUNTA
    int opcao;

    cout << "\nBoa, "<<nome<<", nome fenomenal!";
    cout << "\nTô curtindo a vibe, tá surreal.";
    cout << "\nA gente tá se dando bem, é maneiro...";
    cout << "\nTu tá ligado que nós é parceiro (1 - SIM | 2 - NAO) ?" << endl;
    cin >> opcao;

    switch (opcao)
    {   
    case 1:
        repeticao();
        break;
    case 2:
        comoAssim();
        break;
    default:
        cout << "\nOpção inválida!";
        parceiros(nome);
        break;
    }

}

void comoAssim(){

    //SETIMA PERGUNTA
    int opcao;
    cout << "\nComo assim, meu irmão, que a gente não tá de boa?";
    cout << "\nFala a real, sem curva, na boa.";
    cout << "\nQuero saber, sem rodeio ou confusão:";
    cout << "\nA gente tá se dando bem ou não (1 - SIM | 2 - NAO)?" << endl;
    cin >> opcao;

    switch (opcao)
    {   
    case 1:
        repeticao();
        break;
    case 2:
        comoAssim();
        break;
    default:
        cout << "\nOpção inválida!";
        comoAssim();
        break;
    }
}

void repeticao(){
    //OITAVA PERGUNTA
    int num;
    cout << "\nAgora que é firmeza, viramos parceiro,";
    cout << "\nEscolhe aí, sem medo, que eu sou verdadeiro.";
    cout << "\nQuantos 'Tamo junto' cê quer escutar?";
    cout << "\nÉ só mandar o número que eu vou mandar!" << endl;
    cin >> num;

    cout << endl;
    cout << endl;
    cout << "Ta be, la vai:";

    for(int cont = 1; cont <= num; cont++){
        cout << "\nTamo junto!";
    }

    cout << endl;
    cout << endl;

    cout << "\nFoi muito bom conversar contigo!!! Valeu meu irmão!" << endl;
}