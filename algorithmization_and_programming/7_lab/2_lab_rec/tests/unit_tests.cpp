// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

// Test case for Sum function
TEST(SumFunctionTest, BasicTests) {
    // Create a 2D array for testing
    const int rowCount = 4;
    const int colCount = 4;

    int** a = new int*[rowCount];
    for (int i = 0; i < rowCount; ++i) {
        a[i] = new int[colCount];
    }

    // Fill the array with some test data
    int testData[4][4] = {
        {1, 2, 3, 4},  // Row 0
        {5, 6, 7, 8},  // Row 1
        {9, 10, 11, 12}, // Row 2
        {13, 14, 15, 16}  // Row 3
    };

    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < colCount; ++j) {
            a[i][j] = testData[i][j];
        }
    }

    // Test cases for Sum function
    EXPECT_EQ(lib::Sum(a, rowCount, colCount, 0, 1), 24); // Sum of max elements from rows 1 (8) and 3 (16)

    // Clean up the allocated memory
    for (int i = 0; i < rowCount; ++i) {
        delete[] a[i];
    }
    delete[] a;
}
