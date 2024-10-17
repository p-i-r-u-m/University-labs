// include header
#include "function.h"

// include libraries
#include <iostream>

using namespace std;

namespace lib {
  // functions script

  void Create(double *a, const int size, const double Low, const double High)
  {
    for (int i=0; i<size; i++)
    {
      double random = Low + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (High - Low)));
      a[i] = random;
    }
  }

  void Print(double *a, const int size)
  {
    cout << "a = [";
    for (int i=0; i<size; i++)
    {
      cout << " " << a[i];
    }

    cout << " ]" << endl;
  }

  double Sum_odd(double *a, const int size)
  {
    double sum = 0;
    for (int i=0; i<size; i++)
    {
      if (i%2 != 0)
        sum += a[i];
      else
        sum += 0;
    }
    
    return sum;
  }

  int first_neg_el(double *a, const int size)
  {
    
    for (int i=0; i<size; i++)
    {
      if (a[i] < 0)
      {
        return i;
        
      }
    }

    return -1;
  }

  int last_neg_el(double *a, const int size)
  {
    
    for (int i=size-1; i>=0; i--)
    {
      if (a[i] < 0)
      {
        return i;
        
      }
    }

    return -1;
  }

  double sum_between_negatives(double *a, const int size) {
    int firstIndex = first_neg_el(a, size);
    int lastIndex = last_neg_el(a, size);
    
    
    if (firstIndex == -1 || lastIndex == -1 || firstIndex >= lastIndex) 
    {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = firstIndex + 1; i < lastIndex; i++) 
    { 
        sum += a[i];
    }
    return sum; 
  }

  void compress_array(double *a, int &size) {
    int j = 0;

    
    for (int i = 0; i < size; i++) {
        
        if (abs(a[i]) > 1) {
            a[j++] = a[i];
        }
    }

    for (; j < size; j++) {
        a[j] = 0;
    }

    size = j; 
  }
  
}
