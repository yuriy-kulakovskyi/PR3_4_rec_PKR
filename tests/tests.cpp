#include <gtest/gtest.h>
#include "../functions/functions.h"

TEST(SwapPairsTest, OddNumberOfElements) {
  Elem* L = nullptr;

  insert(L, 1);
  ASSERT_NE(L, nullptr);
}