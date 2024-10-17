#pragma once
#include <string>

using namespace std;

namespace lib {
  // declare functions
  void Create(int *a, const int size, const int Low, const int High, int i);

  void Print(int *a, const int size, string arr, int i);

  int Max_index(int *a, const int size, int max, int max_index, int i);

  int Min_index(int *a, const int size, int min, int min_index, int i);

  double Average(const int min_index, const int max_index);
}
