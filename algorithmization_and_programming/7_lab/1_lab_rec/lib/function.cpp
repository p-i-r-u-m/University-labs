// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

namespace lib {
  // functions script
  
  void Declaration(int** a, const int rowCount, const int colCount, int i)
  {
    a[i] = new int [colCount];

    if (i<rowCount-1)
      Declaration(a, rowCount, colCount, i+1);
  }

  void Create(int** a, const int rowCount, const int colCount,
      const int Low, const int High, int i, int j)
  {
    a[i][j] = Low + rand() % (High-Low+1);

    if (j<colCount-1) {
      Create(a, rowCount, colCount, Low, High, i, j+1);
    }
    else {
      if (i<rowCount-1) {
        Create(a, rowCount, colCount, Low, High, i+1, 0);
      }
    }
  }

  void Modify(int** a, const int rowCount, const int colCount, 
      int i, int j)
  {
    if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
      a[i][j] = 0;

    if (j<colCount-1)
      Modify(a,rowCount, colCount, i, j+1);
    else 
      if (i<rowCount-1)
        Modify(a, rowCount, colCount, i+1, 0);
  }

  int Count(int** a, const int rowCount, const int colCount,
      int result, int i, int j)
  {
    if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
      result += 1;

    if (j<colCount-1)
      return Count(a,rowCount, colCount, result, i, j+1);
    else { 
      if (i<rowCount-1)
        return Count(a, rowCount, colCount, result, i+1, 0);
    }

    return result;
  }

  int Sum(int** a, const int rowCount, const int colCount, 
      int sum, int i, int j)
  {
    if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
      sum += a[i][j];

    if (j<colCount-1)
      return Sum(a, rowCount, colCount, sum, i, j+1);
    else { 
      if (i<rowCount-1) 
        return Sum(a, rowCount, colCount, sum, i+1, 0);
    }    
    return sum;
    
  }

  void Print(int** a, const int rowCount, const int colCount, 
      int i, int j)
  {
    cout << setw(4) << a[i][j];
    if (j<colCount-1) {
      Print(a, rowCount, colCount, i, j+1);
    }
    else {
      if (i<rowCount-1) {
        cout << endl;
        Print(a, rowCount, colCount, i+1, 0);
      }
      else {
        cout << endl << endl;
      }
    }
  }

  void Switch(int** a, const int row1, const int row2, const int colCount, int j)
  {
    int tmp;
    
    tmp = a[row1][j];
    a[row1][j] = a[row2][j];
    a[row2][j] = tmp;

    if (j<colCount-1)
      Switch(a, row1, row2, colCount, j+1);
  }

  void Sort(int** a, const int rowCount, const int colCount,
      int count, int i)
  {
    if (a[i][0] > a[i+1][0]) {
        Switch(a, i, i+1, colCount, 0);
    }
    else if (a[i][0] == a[i+1][0]) {
      if (a[i][1] < a[i+1][1]) {
        Switch(a, i, i+1, colCount, 0);
        cout << "SECOND SORT:\n";
        Print(a, rowCount, colCount, 0, 0);
      }
      else if (a[i][1] == a[i+1][1]) {
        if (a[i][2] < a[i+1][2]) {
          Switch(a, i, i+1, colCount, 0);
          cout << "THIRD SORT:\n";
          Print(a, rowCount, colCount, 0, 0);
        }
      }
    }

    if (i<rowCount-2)
      Sort(a, rowCount,colCount, count, i+1);
    else {
      count += 1;
      if (count != rowCount)
        Sort(a, rowCount, colCount, count, 0);
      else { 
        cout << "RESULT OF SORT:\n";
        Print(a, rowCount, colCount, 0, 0);
      }
    }
  }

  void Clean(int** a, const int rowCount, int i)
  {
    delete [] a[i];
    if (i<rowCount-2)
      Clean(a, rowCount, i+1);
  }
}
