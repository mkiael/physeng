#include "gtest/gtest.h"
#include "mock_dummy.h"
#include "physeng/core/math/vector2.h"

using namespace physeng::core::math;

TEST(vector2, dummy_test)
{
   mock_dummy dummy;

   EXPECT_CALL(dummy, test()).Times(1);

   dummy.test();

   EXPECT_EQ(3, test());
}
