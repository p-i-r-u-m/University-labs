#pragma once
namespace lib {
  // declare functions

  void Create(int** a, const int rowCount, const int colCount,
    const int Low, const int High);

  void Modify(int** a, const int rowCount, const int colCount);

  int Count(int** a, const int rowCount, const int colCount); 

  int Sum(int** a, const int rowCount, const int colCount); 

  void Print(int** a, const int rowCount, const int colCount);

  void Switch(int** a, const int row1, const int row2, const int colCount);

  void Sort(int** a, const int rowCount, const int colCount);

}
