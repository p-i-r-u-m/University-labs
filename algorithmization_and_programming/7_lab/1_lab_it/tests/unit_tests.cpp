// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

// Helper function to create a 2D dynamic array
int** createArray(const int rowCount, const int colCount) {
    int** arr = new int*[rowCount];
    for (int i = 0; i < rowCount; i++) {
        arr[i] = new int[colCount];
    }
    return arr;
}

// Helper function to delete the 2D dynamic array
void deleteArray(int** arr, const int rowCount) {
    for (int i = 0; i < rowCount; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

// Test case for Count function
TEST(ArrayFunctionsTest, CountTest) {
    int rowCount = 3, colCount = 3;
    int** a = createArray(rowCount, colCount);

    // Fill array with test values
    int values[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            a[i][j] = values[i][j];
        }
    }

    EXPECT_EQ(lib::Count(a, rowCount, colCount), 8);

    deleteArray(a, rowCount);
}

// Test case for Sum function
TEST(ArrayFunctionsTest, SumTest) {
    int rowCount = 3, colCount = 3;
    int** a = createArray(rowCount, colCount);

    // Fill array with test values
    int values[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            a[i][j] = values[i][j];
        }
    }

    EXPECT_EQ(lib::Sum(a, rowCount, colCount), 44);

    deleteArray(a, rowCount);
}
