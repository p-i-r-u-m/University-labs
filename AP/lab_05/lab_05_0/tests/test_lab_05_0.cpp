#include <gtest/gtest.h>
#include "../src/lab_05_0.hpp"


TEST(SumTest, HandlesPositiveInput)
{
    EXPECT_EQ(sum(2, 3), 5);
}

TEST(SumTest, HandlesNegativeInput)
{
    EXPECT_EQ(sum(-5, -4), -9);
}

//int main(int argc, char **argv)
//{
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
