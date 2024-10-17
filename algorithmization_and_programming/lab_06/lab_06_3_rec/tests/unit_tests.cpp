// Include the gtest header
# include <gtest/gtest.h>

#include <sstream>

// Include lib headers
#include "../lib/function.h"

// Redirects std::cout and captures output into a stringstream
TEST(PrintTest, BasicOutput) {
    int arr[] = {1, 2, 3, 4, 5};
    const int size = 5;
    
    // Redirect std::cout to a stringstream
    std::stringstream buffer;
    std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());
    
    // Call the function to test
    lib::Print(arr, size, 0);
    
    // Restore std::cout to original state
    std::cout.rdbuf(prevcoutbuf);
    
    // The expected output
    std::string expected_output = " 1 2 3 4 5 ]\n";
    
    // Compare the output
    EXPECT_EQ(buffer.str(), expected_output);
}
