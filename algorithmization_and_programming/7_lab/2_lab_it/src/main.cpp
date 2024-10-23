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
  } else if (Low <= 0 || High <= 0) {
    cout << "Low or High is not positive" << endl;
    return 0;
  }

  lib::Cre

  

  return 0;
}
