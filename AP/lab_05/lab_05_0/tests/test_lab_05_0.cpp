#include <gtest/gtest.h>

int Sum(int a, int b)
{
    return a+b;
}

TEST(SumTest, HandlesPositiveInput)
{
    EXPECT_EQ(Sum(2, 3), 5);
}

TEST(SumTest, HandlesNegativeInput)
{
    EXPECT_EQ(Sum(-2, -3), -5);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
