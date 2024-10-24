// include header
#include "../lib/function.h"

// include libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned)time(NULL));

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

    lib::Create(a, rowCount, colCount, Low, High, 0, 0);
    lib::Print(a, rowCount, colCount, 0, 0);

    cout << "Multiply: " << lib::Multiply(a, rowCount, colCount) << endl;

    lib::Max(a, rowCount, colCount);

    
// cleaning
  lib::Clean(a, rowCount, 0);

  delete [] a;

    return 0;
}
