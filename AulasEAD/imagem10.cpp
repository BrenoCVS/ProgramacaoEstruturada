#include <iostream>

using namespace std;

int main(){

  void *pp;
  int p2 = 10;

  pp = &p2;

  cout << "P endereço de pp: " << *(int*)pp << endl;

  return 0;
}
