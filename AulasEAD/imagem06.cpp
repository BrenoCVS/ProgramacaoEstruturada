#include <iostream>

using namespace std;

int main(){

  int p = 0x5DC;
  int c = 0x5DC; 
  
  cout << "*p = " << p << " c = " << c << endl;
  p++;
  c++;
  cout << "*p = " << p << " c = " << c << endl;

  return 0;
}
