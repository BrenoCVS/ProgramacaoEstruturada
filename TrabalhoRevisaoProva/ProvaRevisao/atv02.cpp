//Faca um programa  que seja capaz de ler 15 numeros e seja capaz de exibir:
//Quantos numeros lidos sao iguais a 4
//Quantos sao maiores que a media

#include <iostream>
using namespace std;


int main(){
  float media, num[15], total = 0.0;
  int iguais = 0, maiores = 0;

  for(int cont = 0; cont <15; cont++){
    cout << "Digite o valor numero " << cont + 1 << " do vetor: ";
    cin >> num[cont];

    total += num[cont];

  }

  media = total / 15;

  for(int cont = 0; cont<15; cont++){
    if(num[cont] == 4){
      iguais++;
    }
    if(num[cont]> media){
      maiores++;
    }
  }

  cout << "A media de todos os valores digitados foi: " << media << endl;
  cout << "No vetor existem: " << iguais << " numeros iguais a 4 e " << maiores << " numeros maiores qua a media" << endl;

}
