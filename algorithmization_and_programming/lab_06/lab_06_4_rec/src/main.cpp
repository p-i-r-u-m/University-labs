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

  double Low = -5.0;
  double High = 5.0;

  lib::Create(a, n, Low, High);
  cout << "a = ["; lib::Print(a, n);

  cout << "Sum of elements with odd indexes: " << lib::Sum_odd(a, n) << endl;
  int firstIndex = lib::first_neg_el(a, n);
  int lastIndex = lib::last_neg_el(a, n);
  cout << "Sum of elements between first and last negative: " << lib::sum_between_negatives(a, n, firstIndex, lastIndex, firstIndex + 1, 0) << endl;

  lib::compress_array(a, n, 0, 0);
  cout << "a = ["; lib::Print(a, n);

  delete[] a;
  return 0;
}
