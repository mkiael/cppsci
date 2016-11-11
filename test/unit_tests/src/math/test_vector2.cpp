#include "gtest/gtest.h"
#include "mock_dummy.h"
#include "cppsci/math/vector2.h"

TEST(vector2, dummy_test)
{
   mock_dummy dummy;

   EXPECT_CALL(dummy, test()).Times(1);

   dummy.test();

   EXPECT_EQ(3, test());
}
