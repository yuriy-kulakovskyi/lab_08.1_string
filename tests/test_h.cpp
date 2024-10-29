#include <gtest/gtest.h>
#include "../include/main.h"
#include <string>

TEST(CountTest, HandleCount) {
  string str = "bim bim 1111 bam bam 2222";

  int result = Count(str);

  EXPECT_EQ(result, 2);
}