// include header
#include "../lib/function.h"

// include libraries
#include <iostream>
#include <time.h>


using namespace std;

int main() {
  // script
  
  srand((unsigned)time(NULL));
  const int size = 26;
  int a[size];

  int Low = -40;
  int High = 20;

  lib::Create(a, size, Low, High);
  cout << "a = " << lib::Print(a, size) << endl;

  cout << "Number of elements: " << lib::Count(a, size) << endl;
  cout << "Sum of elements: " << lib::Sum(a, size) << endl;

  lib::Modify(a, size);
  cout << "Modified a = " << lib::Print(a, size) << endl;

  return 0;
}
