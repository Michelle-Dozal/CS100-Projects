#include "gtest/gtest.h"

#include "test_String.hpp"

#include "Test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
