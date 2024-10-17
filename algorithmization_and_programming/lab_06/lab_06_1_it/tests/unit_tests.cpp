// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

// Test suite for the Count function
TEST(CountTest, HandlesEvenIndexesAndNegativeValues) {
    int arr[] = {0, -1, 2, -3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(lib::Count(arr, size), 2);
}

TEST(CountTest, HandlesAllPositiveValues) {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(lib::Count(arr, size), 0);
}

// Test suite for the Sum function
TEST(SumTest, HandlesNegativeAndEvenIndexes) {
    int arr[] = {0, -1, 2, -3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(lib::Sum(arr, size), -4);
}

TEST(SumTest, HandlesAllPositiveValues) {
    int arr[] = {1, 2, 3, 4, 5, 6};  
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(lib::Sum(arr, size), 0);
}


