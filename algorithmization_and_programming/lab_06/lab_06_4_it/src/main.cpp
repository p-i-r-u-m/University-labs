// include header
#include "../lib/function.h"

// include libraries
#include <iostream>
#include <time.h>

using namespace std;

int main() {
  // script
  srand((unsigned)time(NULL));

  int n = 0;
  cout << "n = "; cin >> n;

  double *a = new double[n];

  double Low = -20.0;
  double High = 20.0;

  lib::Create(a, n, Low, High);
  lib::Print(a, n);

  cout << "Sum of elements with odd indexes: " << lib::Sum_odd(a, n) << endl;
  cout << "Sum of elements between first and last negative: " << lib::sum_between_negatives(a, n) << endl;

  lib::compress_array(a, n);
  lib::Print(a, n);
  
  delete[] a;
  return 0;
}
