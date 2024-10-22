// include header
#include "function.h"

// include libraries
#include <string>


using namespace std;

namespace lib {
  // functions script

  void Create(int *a, const int size, const int Low, const int High)
  {
    for (int i=0; i < size; i++) {
      a[i] = Low + rand() % (High-Low+1);
    }
  }

  string Print(int *a, const int size)
  {
    string arr = "[";

    for (int i=0; i < size; i++)
    {
      arr += (" " + to_string(a[i])); 
    }
    arr += " ]";

    return arr;
  }

  int Count(int *a, const int size)
  {
    int number = 0;

    for (int i=0; i < size; i++)
    {
      if (!(a[i] > 0 || i%2 != 0))
        number += 0;
      else
        number += 1;
      
    }

    return number;
  }

  int Sum(int *a, const int size)
  {
    int sum = 0;

    for (int i=0; i < size; i++)
    {
      if (!(a[i] > 0 || i%2 != 0))
        sum += 0;
      else
        sum += a[i];
      
    }

    return sum;
  }

  void Modify(int *a, const int size)
  {
    for (int i=0; i < size; i++)
    {
      if (!(a[i] > 0 || i%2 != 0))
        a[i] = 0;
    }
  }

}
