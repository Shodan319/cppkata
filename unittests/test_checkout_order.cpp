#include <gtest/gtest.h>
#include <library.h>

namespace
{
TEST(CheckoutOrderTest, Initialization) { EXPECT_STREQ("hello", hello()); }
}
