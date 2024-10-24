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

  lib::Declaration(a, rowCount, colCount, 0);

  // main work
  lib::Create(a, rowCount, colCount, Low, High, 0, 0);

  cout << endl;
  lib::Print(a, rowCount, colCount, 0, 0);

  cout << "Sum: " << lib::Sum(a, rowCount, colCount, 0, 1) << endl;

  // cleaning
  lib::Clean(a, rowCount, 0);

  delete [] a;

  return 0;
}
