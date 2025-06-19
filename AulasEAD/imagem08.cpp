#include <iostream>

using namespace std;

int main(){

  int *p, *p2, x, y;
  p = &x;
  p2 = &y; 

  cout << "&y = " << &y << endl << "&x = " << &x << endl;

  if(p > p2)
    cout << "p > p2" << endl;
  else
    cout << "p <= p2" << endl;

  return 0;
}
