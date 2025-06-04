//Escreva um programa em c++ para calcular o valor de uma compra de N produtos. O programa devera solicitar o numeros de produtos[ que esta sendo lancao

#include <iostream>
using namespace std;

int main(){
  int num_prod;
  float valor_prod, total = 0.0;

  cout << "Quantos produtos voce vai lancar: ";
  cin >> num_prod;

  cout << endl;
  cout << endl;
  
  for(int cont = 0; cont < num_prod; cont++){
    cout << "Digite o preco do produto " << cont + 1 << ":" << endl;
    cin >> valor_prod;

    total+=valor_prod;
  }

  cout << endl;
  cout << "O preco total da compra foi: " << total << endl;
}
