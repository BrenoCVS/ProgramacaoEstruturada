#include <iostream>

using namespace std;

int main(){
  
  int p = 0x5DC;

  cout << "*p = " << p << endl;
  p++;
  cout << "*p = " << p << endl;
  p = p+15;
  cout << "*p = " << p << endl;
  p = p-2;
  cout << "*p = " << p << endl;

  return 0;

}
