// include header
#include "function.h"

// include libraries
#include <iostream>

using namespace std;

namespace lib {
  // functions script
  
  void Print(int a[], const int size, int i)
  {
    cout << " " << a[i];

    if(i<size-1)
      Print(a, size, i+1);
    else
      cout << " ]" << endl;
  }

}
