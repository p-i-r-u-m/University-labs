// include header
#include "function.h"

// include libraries
#include <iostream>

using namespace std;

namespace lib {
  // functions script
  
  void Print(int a[], const int size)
  {
    cout << "a = [";

    for (int i=0; i<size; i++)
    {
      cout << " " << a[i];
    }

    cout << " ]" << endl;
  }

}
