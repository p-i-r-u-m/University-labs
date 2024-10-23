// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>

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

  void Modify(int** a, const int rowCount, const int colCount)
  {
    for (int i=0; i<rowCount; i++)
      for (int j=0; j<colCount; j++)
        if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
          a[i][j] = 0;
  }

  int Count(int** a, const int rowCount, const int colCount)
  {
    int result = 0;
    for (int i=0; i<rowCount; i++)
      for (int j=0; j<colCount; j++)
        if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
          result += 1;

    return result;
  }

  int Sum(int** a, const int rowCount, const int colCount)
  {
    int sum = 0;
    for (int i=0; i<rowCount; i++)
      for (int j=0; j<colCount; j++)
        if(!(((a[i][j]%2 != 0) && ((i+j)%7 == 0))))
          sum += a[i][j];

    return sum;
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

  void Switch(int** a, const int row1, const int row2, const int colCount)
  {
    int tmp;
    for (int j = 0; j < colCount; j++) {
      tmp = a[row1][j];
      a[row1][j] = a[row2][j];
      a[row2][j] = tmp;
    }
  }

  void Sort(int** a, const int rowCount, const int colCount)
  {
    int count = 0;
    while (count != rowCount) {
      for (int i = 0; i < rowCount-1; i++) 
      {
        if (a[i][0] > a[i+1][0]) {
          Switch(a, i, i+1, colCount);
        }
        else if (a[i][0] == a[i+1][0]) {
          if (a[i][1] < a[i+1][1]) {
            Switch(a, i, i+1, colCount);
            cout << "SECOND SORT:";
            Print(a, rowCount, colCount);
          }
          else if (a[i][1] == a[i+1][1]) {
            if (a[i][2] < a[i+1][2]) {
              Switch(a, i, i+1, colCount);
              cout << "THIRD SORT:";
              Print(a, rowCount, colCount);
            }
          }
        }
      }
      count += 1;
    }

    cout << "RESULT OF SORT:";
    Print(a, rowCount, colCount);
  }
}
