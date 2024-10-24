// include header
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
  int rowCount, colCount, Low, High;

  cout << "Rows: "; cin >> rowCount;
  cout << "Columbs: "; cin >> colCount;
  cout << "Low: "; cin >> Low;
  cout << "High: "; cin >> High;

  if (rowCount <= 0 || colCount <= 0) {
    cout << "Either rowCount or colCount is invalid" << endl;
    return 0;
  } else if (Low >= High) {
    cout << "Low is not less than High" << endl;
    return 0;
  } 

  // creation of 2D array
  int **a = new int*[rowCount];

  for (int i=0; i<rowCount; i++)
    a[i] = new int [colCount];

  // main work
  lib::Create(a, rowCount, colCount, Low, High);
  lib::Print(a, rowCount, colCount);

  cout << "Multiply: " << lib::Multiply(a, rowCount, colCount)
    << endl;

  lib::Max(a, rowCount, colCount);

  // cleaning
  for (int i=0; i<rowCount; i++)
    delete [] a[i];

  delete [] a;

  return 0;
}
