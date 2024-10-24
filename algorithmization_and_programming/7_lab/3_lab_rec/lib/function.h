#pragma once
namespace lib {
  // declare functions
  
  void Create(int** a, const int rowCount, const int colCount,
    const int Low, const int High, int i, int j);
  
  void Print(int** a, const int rowCount, const int colCount,
      int i, int j);

  int Multiply(int** a, const int rowCount, const int colCount);

  void Max(int** a, const int rowCount, const int colCount);


  void Declaration(int** a, const int rowCount, const int colCount,
      int i);

  void Clean(int** a, const int rowCount, int i);

}
