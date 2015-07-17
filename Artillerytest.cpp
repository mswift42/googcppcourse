// Artillerytest.cpp
// unit tests for Artillery.cpp

#include <gtest/gtest.h>
#include "./Artillery.cpp"

TEST(DistanceTest, TestDistpancePerAngle){
  ASSERT_EQ(1242, distance(0.78));
}

int main(int argc, char** argv) {
  
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  
}
