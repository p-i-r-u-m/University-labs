#pragma once
#include <string>

namespace lib {
  // declare function
  void Create(int *a, const int size, const int Low, const int High, int i);

  void Print(int *a, const int size, std::string &arr, int i);
  
  void Count(int *a, const int size, int &number, int i);

  void Sum(int *a, const int size, int &sum, int i);

  void Modify(int *a, const int size, int i);

}
