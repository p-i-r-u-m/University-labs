// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"


// Test suite for Max_index function
TEST(MaxIndexTest, HandlesNormalValues) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Max_index(arr, size, arr[0], 0, 0), 4); // Index of max (5) is 4
}

TEST(MaxIndexTest, HandlesAllNegativeValues) {
    int arr[] = {-1, -2, -3, -4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Max_index(arr, size, arr[0], 0, 0), 0); // Index of max (-1) is 0
}

TEST(MaxIndexTest, HandlesSingleElement) {
    int arr[] = {10};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Max_index(arr, size, arr[0], 0, 0), 0); // Index of max (10) is 0
}

// Test suite for Min_index function
TEST(MinIndexTest, HandlesNormalValues) {
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Min_index(arr, size, arr[0], 0, 0), 4); // Index of min (1) is 4
}

TEST(MinIndexTest, HandlesAllNegativeValues) {
    int arr[] = {-1, -2, -3, -4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Min_index(arr, size, arr[0], 0, 0), 4); // Index of min (-5) is 4
}

TEST(MinIndexTest, HandlesSingleElement) {
    int arr[] = {10};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(lib::Min_index(arr, size, arr[0], 0, 0), 0); // Index of min (10) is 0
}

// Test suite for Avarage function
TEST(AvarageTest, HandlesNormalIndices) {
    int minIndex = 0;
    int maxIndex = 4;
    EXPECT_EQ(lib::Average(minIndex, maxIndex), 2); // Average of 0 and 4 is 2
}

TEST(AvarageTest, HandlesSameIndices) {
    int minIndex = 3;
    int maxIndex = 3;
    EXPECT_EQ(lib::Average(minIndex, maxIndex), 3); // Average of 3 and 3 is 3
}

TEST(AvarageTest, HandlesNegativeIndices) {
    int minIndex = -2;
    int maxIndex = -1;
    EXPECT_EQ(lib::Average(minIndex, maxIndex), -1.5); // Average of -2 and -1 is -1
}

