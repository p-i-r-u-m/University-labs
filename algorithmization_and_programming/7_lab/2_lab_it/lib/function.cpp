// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>

using namespace std;

namespace lib {
  // functions script

  void Create(int** a, const int rowCount, const int colCount,
      const int Low, const int High)
  {
    for (int i=0; i<rowCount; i++)
      for (int j=0; j<colCount; j++)
        a[i][j] = Low + rand() % (High-Low+1);
  }

  void Print(int** a, const int rowCount, const int colCount)
  {
    cout << endl;
    for (int i=0; i<rowCount; i++)
    {
      for (int j=0; j<colCount; j++)
        cout << setw(4) << a[i][j];
      cout << endl;
    }
    cout << endl;
  }

  int MaxElement(int** a, const int row, const int colCount)
  {
    int max = a[0][0];
    for (int j=0; j<colCount; j++)
      if (a[row][j] > max)
        max = a[row][j];

    return max;
  }

  int Sum(int** a, const int rowCount, const int colCount)
  {
    int sum = 0;
    for (int i=1; i<rowCount; i+=2)
      sum += MaxElement(a, i, colCount);

    return sum;
  }
}
