#include <gtest/gtest.h>
#include "module/message.h"

TEST(MessageTest, BasicTest)
{
  EXPECT_EQ(message(), std::string("Hello, World!"));
}