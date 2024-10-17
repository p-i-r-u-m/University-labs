#pragma once
namespace lib {
  // declare functions

  void Create(double *a, const int size, const double Low, const double High);

  void Print(double *a, const int size);

  double Sum_odd(double *a, const int size);
  
  int first_neg_el(double *a, const int size);
  
  int last_neg_el(double *a, const int size);

  double sum_between_negatives(double *a, const int size);

  void compress_array(double *a, int &size);

}
