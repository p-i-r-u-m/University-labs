// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>
#include <cmath>

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

  int Multiply(int** a, const int rowCount, const int colCount)
  {
    int result = 1;
    bool foundValidRow = false;

    for (int i = 0; i < rowCount; i++) {
        int tmp = 1;
        bool rowIsValid = true;

        for (int j = 0; j < colCount; j++) {
            if (a[i][j] >= 0) {
                tmp *= a[i][j];
            } else {
                rowIsValid = false;
                break;
            }
        }

        if (rowIsValid) {
            result *= tmp;
            foundValidRow = true;
        }
    }

    if (!foundValidRow) {
        return 0;
    }

    return result;
  }

  int Sum(int** a, const int rowCount, const int colCount, int k)
  {
    int sum = 0;
    int stopper = 0;

    if (rowCount < colCount)
      stopper = rowCount;
    else 
      stopper = colCount;
    

    for (int i=0; i<stopper-1; i++)
    {
      cout << "| "<< sum << endl;
      if (k > 0) {
        cout << "$ " << a[i][i+static_cast<int>(fabs(k))] << endl;
        sum += a[i][i+static_cast<int>(fabs(k))];
      } else { 
        cout << "$ " << a[i+static_cast<int>(fabs(k))][i] << endl;
        sum += a[i+static_cast<int>(fabs(k))][i];
      }
    }

    return sum;
  }

  void Max(int** a, const int rowCount, const int colCount)
  {
    int max = 0;
    int k = 0;
    if (rowCount%2 == 0)
      k = rowCount / 2;
    else 
      k = (rowCount-1) / 2;

    for (int k_ind = -k; k_ind < k; k_ind++)
    {
      int r = Sum(a, rowCount, colCount, k_ind);
      if (r > max)
        max = r;
    }

    cout << "Max sum: " << max << endl;
  }


}


