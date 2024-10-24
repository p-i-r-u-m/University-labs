// Include the gtest header
# include <gtest/gtest.h>

// Include lib headers
#include "../lib/function.h"

using namespace lib;

TEST(TestTopic, HowWeTest) {
  // test script

  EXPECT_EQ(sum(2, 5), 7);
  EXPECT_EQ(sum(-3, 6), 3);
}
