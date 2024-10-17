// include header
#include "function.h"

// include libraries
#include <iostream>
#include <string>

using namespace std;

namespace lib {
  // functions script
  
  void Create(int *a, const int size, const int Low, const int High)
  {
    for (int i=0; i<size; i++)
    {
      a[i] = Low + rand() % (High-Low+1);
    }
  }

  void Print(int *a, const int size)
  {
    string arr = "";
    for (int i=0; i<size; i++)
    {
      arr += (" " + to_string(a[i]));
    }

    cout << "a = [" << arr << " ]" << endl;
  }

  int Max_index(int *a, const int size)
  {
    int max = a[0];
    int max_index = 0;

    for (int i=1; i<size; i++)
    {
      if (a[i]>max)
      {
        max = a[i];
        max_index = i;
      }
    }

    return max_index;
  }

  int Min_index(int *a, const int size)
  {
    int min = a[0];
    int min_index = 0;

    for (int i=1; i<size; i++)
    {
      if (a[i]<min)
      {
        min = a[i];
        min_index = i;
      }
    }

    return min_index;
  }

  double Average(const int min_index, const int max_index)
  {
    return (static_cast<double>(min_index) + static_cast<double>(max_index))/2;
  }
}
