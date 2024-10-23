// include header
#include "function.h"

// include libraries
#include <iostream>

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
}
