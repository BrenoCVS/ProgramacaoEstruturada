#include <iostream>

using namespace std;

int main(){

  int *p, *p1, x = 10;
  float y = 20.0;

  p = &x;
  cout << "*p = " << *p << endl;
  p1 = p;
  cout << "*p1 = " << p1 << endl;

  //Diferente da imagem, aqui realizei uma conversão de valores de float para int, para assim as variaveis conversatem
  p = (int*)&y;

  return 0;
}
