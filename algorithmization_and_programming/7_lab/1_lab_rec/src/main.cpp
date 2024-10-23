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
  lib::Create(a, rowCount, colCount, Low, High, 0, 0);

  cout << endl;
  lib::Print(a, rowCount, colCount, 0, 0);

  lib::Sort(a, rowCount, colCount, 0, 0);

  cout << "Count: " << lib::Count(a, rowCount, colCount, 
      0, 0, 0) << endl;


  cout << "Sum: " << lib::Sum(a, rowCount,colCount, 
      0, 0, 0) << endl;
  lib::Modify(a, rowCount, colCount, 0, 0);

  cout << endl;
  lib::Print(a, rowCount, colCount, 0, 0);

  // cleaning
  lib::Clean(a, rowCount, 0);

  delete [] a; 

  return 0;
}
