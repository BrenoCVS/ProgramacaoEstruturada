#include <iostream>

using namespace std;

int main(){

  void *pp;
  int *p1, x = 10;

  p1 = &x;
  pp = &x;

  cout << "P endereço de pp: " << pp << endl;
  pp = &p1;
  cout << "P endereço de pp: " << pp << endl;
  pp = p1;
  cout << "P endereço de pp: " << pp << endl;

  return 0;
}
