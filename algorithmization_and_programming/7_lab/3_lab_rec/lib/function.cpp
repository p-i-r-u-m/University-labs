// include header
#include "function.h"

// include libraries
#include <iostream>
#include <iomanip>
#include <cmath>

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

 
  
// Recursive helper for Multiply function
int MultiplyHelper(int** a, const int rowCount, const int colCount, int i, int& result) {
    if (i >= rowCount) {
        return result;
    }

    int tmp = 1;
    bool rowIsValid = true;

    // Check the validity of the current row
    for (int j = 0; j < colCount; j++) {
        if (a[i][j] >= 0) {
            tmp *= a[i][j]; // Multiply non-negative elements
        } else {
            rowIsValid = false; // Mark row as invalid
            break;
        }
    }

    if (rowIsValid) {
        result *= tmp; // Multiply to the result if the row is valid
    }

    return MultiplyHelper(a, rowCount, colCount, i + 1, result); // Recur for the next row
}

// Wrapper function for Multiply
int Multiply(int** a, const int rowCount, const int colCount) {
    int result = 1;
    // Initialize result to 1 for multiplication
    int foundValidRow = MultiplyHelper(a, rowCount, colCount, 0, result);
    
    return (foundValidRow > 1) ? result : 0; // Return 0 if no valid rows found
}


void MaxHelper(int** a, const int rowCount, const int colCount, int k, int i, int currentSum, int& maxSum) {
    if (i >= rowCount) {
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        return;
    }

    int j = i + k; 
    if (j >= 0 && j < colCount) {
        currentSum += a[i][j]; 
    }

    MaxHelper(a, rowCount, colCount, k, i + 1, currentSum, maxSum); 
}

void MaxDiagonalHelper(int** a, const int rowCount, const int colCount, int k, int& maxSum) {
    if (k > rowCount - 1) return; 

    int currentSum = 0; 
    MaxHelper(a, rowCount, colCount, k, 0, currentSum, maxSum); 

    MaxDiagonalHelper(a, rowCount, colCount, k + 1, maxSum); 
}

void Max(int** a, const int rowCount, const int colCount) {
    int maxSum = 0;
    MaxDiagonalHelper(a, rowCount, colCount, -rowCount + 1, maxSum); 
    cout << "Max sum: " << maxSum << endl;
}


  void Clean(int** a, const int rowCount, int i)
  {
    delete [] a[i];
    if (i<rowCount-2)
      Clean(a, rowCount, i+1);
  }
}
