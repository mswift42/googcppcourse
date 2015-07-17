// Artillerytest.cpp
// unit tests for Artillery.cpp

#include <gtest/gtest.h>
#include "./Artillery.cpp"

TEST(TimeInAirTest, timeInAir){
  ASSERT_EQ(2.4, timeInAir(50));
}

int main(int argc, char** argv) {
  
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  
}
