// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

// Test suite for the Count function
TEST(CountTest, HandlesEvenIndexesAndNegativeValues) {
  int arr[] = {0, -1, 2, -3, -4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int number = 0;
  lib::Count(arr, size, number, 0);

  EXPECT_EQ(number, 2);
}

TEST(CountTest, HandlesAllPositiveValues) {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  int number = 0;
  lib::Count(arr, size, number, 0);

  EXPECT_EQ(number, 0);
}

// Test suite for the Sum function
TEST(SumTest, HandlesNegativeAndEvenIndexes) {
  int arr[] = {0, -1, 2, -3, -4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  lib::Sum(arr, size, sum, 0);
  EXPECT_EQ(sum, -4);
}

TEST(SumTest, HandlesAllPositiveValues) {
  int arr[] = {1, 2, 3, 4, 5, 6};  
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  lib::Sum(arr, size, sum, 0);

  EXPECT_EQ(sum, 0);
}
