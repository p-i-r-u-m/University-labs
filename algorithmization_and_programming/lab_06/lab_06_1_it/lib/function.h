#pragma once
#include <string>
namespace lib {
  // declare functions
  
  void Create(int *a, const int size, const int Low, const int High);

  std::string Print(int *a, const int size);

  int Count(int *a, const int size);

  int Sum(int *a, const int size);

  void Modify(int *a, const int size);

}
