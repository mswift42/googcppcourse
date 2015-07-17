// Artillerytest.cpp
// unit tests for Artillery.cpp

#include <gtest/gtest.h>
#include "./Artillery.cpp"

TEST(DistanceTest, TestDistpancePerAngle){
  ASSERT_EQ(798, distance(20));
}

int main(int argc, char** argv) {
  
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  
}
