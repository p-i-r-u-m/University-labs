#pragma once
namespace lib {
  // declare functions

  void Create(double *a, const int size, const double Low, const double High, int index = 0);
  
  void Print(double *a, const int size, int index = 0);
  
  double Sum_odd(double *a, const int size, int index = 0);
  
  int first_neg_el(double *a, const int size, int index = 0);
  
  int last_neg_el(double *a, const int size, int index = -1);
  
  double sum_between_negatives(double *a, const int size, int firstIndex, int lastIndex, int i, double sum);
  
  void fill_zeros(double *a, int start, int size); 

  void compress_array(double *a, int size, int i, int j);
}
