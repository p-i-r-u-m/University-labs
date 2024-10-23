#include "../lib/function.h"

// include libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // script
  
  srand((unsigned)time(NULL));

  // variable declaration
  const int rowCount = 7;
  const int colCount = 6;
  const int Low = 9;
  const int High = 61;

  // creation of 2D array
  int **a = new int*[rowCount];

  for (int i=0; i<rowCount; i++)
    a[i] = new int [colCount];

  // main work
  lib::Create(a, rowCount, colCount, Low, High);
  lib::Print(a, rowCount, colCount);

  lib::Sort(a, rowCount, colCount);

  cout << "Count: " << lib::Count(a, rowCount, colCount) << endl;
  cout << "Sum: " << lib::Sum(a, rowCount,colCount) << endl;
  lib::Modify(a, rowCount, colCount);
  lib::Print(a, rowCount, colCount);

  // cleaning
  for (int i=0; i<rowCount; i++)
    delete [] a[i];

  delete [] a;

  return 0;
}
