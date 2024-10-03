#include <gtest/gtest.h>
#include <cmath>
#include <iostream>

double k(const double x, const double y);

TEST(FunctionKTest, HandlesPositiveInput)
{
    EXPECT_NEAR(k(1, 2), (sin(1)/(2*2)) + (cos(2)/(1*1)), 1e-6);
    EXPECT_NEAR(k(2, 3), (sin(2)/(3*3)) + (cos(3)/(2*2)), 1e-6);
}

double k(const double x, const double y)
{
    return ( (sin(x)/(y*y) + (cos(y)/(x*x))) );
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
