// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

using namespace lib;

// Helper function to allocate a 2D array
int** Create2DArray(int rowCount, int colCount) {
    int** array = new int*[rowCount];
    for (int i = 0; i < rowCount; ++i) {
        array[i] = new int[colCount];
    }
    return array;
}

// Helper function to delete a 2D array
void Delete2DArray(int** array, int rowCount) {
    for (int i = 0; i < rowCount; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

// Test cases
TEST(MultiplyTest, ValidRows) {
    // Test case where all rows have non-negative elements
    int rowCount = 3;
    int colCount = 3;
    int** matrix = Create2DArray(rowCount, colCount);
    
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; // Product: 6
    matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6; // Product: 120
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9; // Product: 504
    
    EXPECT_EQ(Multiply(matrix, rowCount, colCount), 6 * 120 * 504);
    
    Delete2DArray(matrix, rowCount);
}

TEST(MultiplyTest, ContainsNegative) {
    // Test case where one row contains a negative element
    int rowCount = 3;
    int colCount = 3;
    int** matrix = Create2DArray(rowCount, colCount);
    
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; // Product: 6
    matrix[1][0] = 4; matrix[1][1] = -5; matrix[1][2] = 6; // Invalid row
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9; // Product: 504
    
    EXPECT_EQ(Multiply(matrix, rowCount, colCount), 6 * 504);
    
    Delete2DArray(matrix, rowCount);
}

TEST(MultiplyTest, AllNegative) {
    // Test case where all elements are negative
    int rowCount = 3;
    int colCount = 3;
    int** matrix = Create2DArray(rowCount, colCount);
    
    matrix[0][0] = -1; matrix[0][1] = -2; matrix[0][2] = -3; // Invalid row
    matrix[1][0] = -4; matrix[1][1] = -5; matrix[1][2] = -6; // Invalid row
    matrix[2][0] = -7; matrix[2][1] = -8; matrix[2][2] = -9; // Invalid row
    
    EXPECT_EQ(Multiply(matrix, rowCount, colCount), 0);
    
    Delete2DArray(matrix, rowCount);
}

TEST(MultiplyTest, MixedRows) {
    // Test case with mixed valid and invalid rows
    int rowCount = 4;
    int colCount = 3;
    int** matrix = Create2DArray(rowCount, colCount);
    
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; // Product: 6
    matrix[1][0] = 4; matrix[1][1] = -5; matrix[1][2] = 6; // Invalid row
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9; // Product: 504
    matrix[3][0] = 10; matrix[3][1] = 11; matrix[3][2] = 12; // Product: 1320
    
    EXPECT_EQ(Multiply(matrix, rowCount, colCount), 6 * 504 * 1320);
    
    Delete2DArray(matrix, rowCount);
}

TEST(MultiplyTest, EmptyMatrix) {
    // Test case with an empty matrix
    int rowCount = 0;
    int colCount = 0;
    EXPECT_EQ(Multiply(nullptr, rowCount, colCount), 0);
}
