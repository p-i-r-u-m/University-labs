// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>

using namespace std;

namespace lib {
  // functions script

  void Declaration(int** a, const int rowCount, const int colCount,
      int i)
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

  int MaxElement(int** a, const int row, const int colCount,
      int max, int j)
  {
    if (j >= colCount) {
        return max;
    }
    if (a[row][j] > max) {
        max = a[row][j];
    }
    return MaxElement(a, row, colCount, max, j+1);
  }

  int Sum(int** a, const int rowCount, const int colCount, 
      int sum, int i)
  {
    if (i >= rowCount) {
        return sum;
    }

    sum += MaxElement(a, i, colCount, 0, 0);

    return Sum(a, rowCount, colCount, sum, i + 2);
  }

  void Clean(int** a, const int rowCount, int i)
  {
    delete [] a[i];
    if (i<rowCount-2)
      Clean(a, rowCount, i+1);
  }
}
