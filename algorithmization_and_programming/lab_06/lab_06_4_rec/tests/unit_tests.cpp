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


