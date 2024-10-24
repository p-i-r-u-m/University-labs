// include header
#include "../lib/function.h"

// include libraries
#include <iostream>

using namespace std;

int main() {
  // script
  
  int a, b;

  cout << "a = ? "; cin >> a;
  cout << "b = ? "; cin >> b;

  int c = lib::sum(a, b);

  cout << "c = " << c << endl;

  //system("pause");
  return 0;

  return 0;
}
