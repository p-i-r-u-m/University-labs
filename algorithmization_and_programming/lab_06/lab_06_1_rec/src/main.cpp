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

  string arr = "";
  int number = 0;
  int sum = 0;


  lib::Create(a, size, Low, High, 0);

  lib::Print(a, size, arr, 0);
  cout << "a = [ " << arr << " ]" << endl;

  lib::Count(a, size, number, 0);
  cout << "Number of elements: " << number << endl;

  lib::Sum(a, size, sum, 0);
  cout << "Sum of elements: " << sum << endl;

  lib::Modify(a, size, 0);
  arr = "";
  lib::Print(a, size, arr, 0);
  cout << "Modified a = [ " << arr << " ]" << endl;

  return 0;
}
