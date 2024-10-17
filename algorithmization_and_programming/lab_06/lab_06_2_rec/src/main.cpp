// include header
#include "../lib/function.h"

// include libraries
#include <time.h>
#include <iostream>

using namespace std;

int main() {
  // script

  srand((unsigned)time(NULL));

  int size = 0;
  cout << "size = "; cin >> size;

  int* a = new int[size];

  int Low = -10;
  int High = 10;

 
  lib::Create(a, size, Low, High, 0);
  lib::Print(a, size, "", 0);
  

  int min_ind = lib::Min_index(a, size, a[0], 0, 0);
  cout << "index of minimum: " << min_ind << endl;

  int max_ind = lib::Max_index(a, size, a[0], 0, 0);
  cout << "index of max: " << max_ind << endl;

  double avr = lib::Average(min_ind, max_ind);
  cout << "Result: " << avr << endl;
  
  delete[] a;

  return 0;
}
