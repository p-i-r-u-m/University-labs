// include header
#include "function.h"

// include libraries
#include <string>

using namespace std;

namespace lib {

  // functions script
  void Create(int *a, const int size, const int Low, const int High, int i)
  {
    a[i] = Low + rand() % (High-Low+1);
    if (i<size-1)
      Create(a, size, Low, High, i+1);
  }

  void Print(int *a, const int size, string &arr, int i)
  {
    arr += (" " + to_string(a[i]));
    if (i<size-1)
      Print(a, size, arr, i+1);
    else
      arr += "";
    
  }

  void Count(int *a, const int size, int &number, int i)
  {

    if (i%2 != 0 || a[i] > 0)
    {
      number += 0;
    }
    else {
      number += 1;
    }

    if (i<size-1)
    {
      Count(a, size, number, i+1);
    }
    else
      number += 0;
    
  }

  void Sum(int *a, const int size, int &sum, int i)
  {

    if (i%2 != 0 || a[i] > 0)
      sum += 0;
    else
      sum += a[i];
    
    
    if (i<size-1)
      Sum(a, size, sum, i+1);
    else
      sum += 0;
  }

  void Modify(int *a, const int size, int i)
  {
    if (i%2 != 0 || a[i] > 0)
      a[i] = 0;

    if (i<size-1)
      Modify(a, size, i+1);
  }

}
