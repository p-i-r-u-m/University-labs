// include header
#include "../lib/function.h"

// include libraries
#include <iostream>

using namespace std;

template <typename T> 
void TPrint(T a[], const int size, int i)
{
  cout << " " << a[i];
  
  if (i<size-1)
    TPrint(a, size, i+1);
  else
    cout << " ]" << endl;
}

int main() {
  // script
  
  int size = 5;

  // Initializing and filling the int array
  int* IntArr = new int[size]{1, 2, 3, 4, 5};

  // Initializing and filling the double array
  double* DoubleArr = new double[size]{1.1, 2.2, 3.3, 4.4, 5.5};


  cout << "Print int array with common function:" << endl;
  cout << "a = [";
  lib::Print(IntArr, size, 0);

  cout << "Print double array with template function:" << endl;
  cout << "a = [";
  TPrint(DoubleArr, size, 0);

  delete[] IntArr;
  delete[] DoubleArr;

  return 0;
}
