#pragma once
namespace lib {
  // declare functions

  void Declaration(int** a, const int rowCount, const int colCount,
      int i);

  void Create(int** a, const int rowCount, const int colCount,
    const int Low, const int High, int i, int j);
  
  void Print(int** a, const int rowCount, const int colCount, 
      int i, int j);

  int Sum(int** a, const int rowCount, const int colCount,
      int sum, int i);

  void Clean(int** a, const int rowCount, int i);

}
