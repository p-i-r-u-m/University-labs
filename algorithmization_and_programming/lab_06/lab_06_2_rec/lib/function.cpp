// include header
#include "function.h"

// include libraries
#include <iostream>
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

  void Print(int *a, const int size, string arr, int i)
  {
    arr += (" " + to_string(a[i]));
    if (i<size-1)
      Print(a, size, arr, i+1);
    else
      cout << "a = [" << arr << " ]" << endl;
  }

  int Max_index(int *a, const int size, int max, int max_index, int i)
  {
    if (a[i]>max)
    {
      max = a[i];
      max_index = i;
    }
    if (i<size-1)
      return Max_index(a, size, max, max_index, i+1);
    else
      return max_index;
  }

  int Min_index(int *a, const int size, int min, int min_index, int i)
  {
    if (a[i]<min)
    {
      min = a[i];
      min_index = i;
    }
    if (i<size-1)
      return Min_index(a, size, min, min_index, i+1);
    else
      return min_index;

  }

  double Average(const int min_index, const int max_index)
  {
    return (static_cast<double>(min_index) + static_cast<double>(max_index))/2;
  }
}
