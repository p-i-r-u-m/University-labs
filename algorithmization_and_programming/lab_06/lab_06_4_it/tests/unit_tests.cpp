// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

// Test for the Sum_odd function
TEST(ArrayFunctionsTest, SumOdd) {
    double arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    EXPECT_DOUBLE_EQ(lib::Sum_odd(arr1, 5), 6.0); // 2.0 + 4.0 = 6.0

    double arr2[] = {0.5, -1.5, 2.5, -2.5, 1.5, 3.0};
    EXPECT_DOUBLE_EQ(lib::Sum_odd(arr2, 6), -1.0); // -1.5 + 3.0 = 1.5

    double arr3[] = {0.0, 0.0, 0.0, 0.0};
    EXPECT_DOUBLE_EQ(lib::Sum_odd(arr3, 4), 0.0); // all zeros
}

// Test for the first_neg_el function
TEST(ArrayFunctionsTest, FirstNegativeElement) {
    double arr1[] = {1.0, 2.0, -3.0, 4.0};
    EXPECT_EQ(lib::first_neg_el(arr1, 4), 2); // first negative at index 2

    double arr2[] = {1.0, 2.0, 3.0, 4.0};
    EXPECT_EQ(lib::first_neg_el(arr2, 4), -1); // no negative elements

    double arr3[] = {-1.0, -2.0, 3.0};
    EXPECT_EQ(lib::first_neg_el(arr3, 3), 0); // first negative at index 0
}

// Test for the last_neg_el function
TEST(ArrayFunctionsTest, LastNegativeElement) {
    double arr1[] = {1.0, -2.0, 3.0, -4.0};
    EXPECT_EQ(lib::last_neg_el(arr1, 4), 3); // last negative at index 3

    double arr2[] = {1.0, 2.0, 3.0};
    EXPECT_EQ(lib::last_neg_el(arr2, 3), -1); // no negative elements

    double arr3[] = {-1.0, -2.0, -3.0};
    EXPECT_EQ(lib::last_neg_el(arr3, 3), 2); // last negative at index 2
}

// Test for the sum_between_negatives function
TEST(ArrayFunctionsTest, SumBetweenNegatives) {
    double arr1[] = {1.0, -2.0, 3.0, -4.0, 5.0};
    EXPECT_DOUBLE_EQ(lib::sum_between_negatives(arr1, 5), 3.0); // 3.0 is between -2.0 and -4.0

    double arr2[] = {1.0, 2.0, 3.0};
    EXPECT_DOUBLE_EQ(lib::sum_between_negatives(arr2, 3), 0.0); // no negative elements

    double arr3[] = {-1.0, 2.0, -3.0, 4.0};
    EXPECT_DOUBLE_EQ(lib::sum_between_negatives(arr3, 4), 2.0); // 2.0 is between -1.0 and -3.0
}


