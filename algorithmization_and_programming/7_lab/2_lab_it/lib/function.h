#pragma once
namespace lib {
  // declare functions

  void Create(int** a, const int rowCount, const int colCount,
    const int Low, const int High);
  
  void Print(int** a, const int rowCount, const int colCount);

  int Sum(int** a, const int rowCount, const int colCount);
}