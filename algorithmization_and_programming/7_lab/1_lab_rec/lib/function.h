#pragma once
namespace lib {
  // declare functions
  
  void Declaration(int** a, const int rowCount, const int colCount, int i);

  void Create(int** a, const int rowCount, const int colCount,
    const int Low, const int High, int i, int j);

  void Modify(int** a, const int rowCount, const int colCount,
      int i, int j);

  int Count(int** a, const int rowCount, const int colCount,
      int result, int i, int j); 

  int Sum(int** a, const int rowCount, const int colCount,
      int sum, int i, int j); 

  void Print(int** a, const int rowCount, const int colCount,
      int i, int j);

  void Switch(int** a, const int row1, const int row2, const int colCount, int j);

  void Sort(int** a, const int rowCount, const int colCount, 
      int count, int j);

  void Clean(int** a, const int rowCount, int i);

}
