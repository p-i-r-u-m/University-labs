#pragma once
namespace lib {
  // declare functions
  void Create(int *a, const int size, const int Low, const int High);

  void Print(int *a, const int size);

  int Max_index(int *a, const int size);

  int Min_index(int *a, const int size);

  double Average(const int min_index, const int max_index);
}
