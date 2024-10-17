// include header
#include "function.h"

// include libraries
#include <iostream>

using namespace std;

namespace lib {
  // functions script

  void Create(double *a, const int size, const double Low, const double High, int index) {
    if (index < size) {
        double random = Low + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (High - Low)));
        a[index] = random;
        Create(a, size, Low, High, index + 1);
    }
}

  void Print(double *a, const int size, int index) {
    if (index < size) {
        cout << " " << a[index];
        Print(a, size, index + 1);
    } else {
        cout << " ]" << endl;
    }
}

  double Sum_odd(double *a, const int size, int index) {
    if (index >= size) {
        return 0;
    }
    return (index % 2 != 0 ? a[index] : 0) + Sum_odd(a, size, index + 1);
}

  int first_neg_el(double *a, const int size, int index) {
    if (index >= size) {
        return -1;
    }
    if (a[index] < 0) {
        return index;
    }
    return first_neg_el(a, size, index + 1);
}

  int last_neg_el(double *a, const int size, int index) {
    if (index < 0) {
        index = size - 1;
    }
    if (index < 0) {
        return -1;
    }
    if (a[index] < 0) {
        return index;
    }
    return last_neg_el(a, size, index - 1);
}

  double sum_between_negatives(double *a, const int size, int firstIndex, int lastIndex, int i, double sum) {
    if (firstIndex == -1 || lastIndex == -1 || firstIndex >= lastIndex) 
    {
        return 0.0;
    }
    else if (i < lastIndex) {
      sum += a[i];
      return sum_between_negatives(a, size, firstIndex, lastIndex, i+1, sum);
    }
    else {
      return sum;
    }
  }

  void fill_zeros(double *a, int k, int size) {
    cout << "start: " << k << endl;
    cout << "size: " << k << endl;
    cout << "a[start]" << a[k] << endl;
    if (k < size) {
      a[k] = 0;
      fill_zeros(a, k + 1, size);
    }
    else 
      return;
  }

  void compress_array(double *a, int size, int i, int j) {
    if (i >= size) {
        fill_zeros(a, j, size);
        return;
    }

    if (abs(a[i]) > 1) {
        a[j] = a[i];
        compress_array(a, size, i + 1, j + 1);
    } else {
        compress_array(a, size, i + 1, j);
    }
  }
}
