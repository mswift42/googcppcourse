// accelerate.cpp

#include <iostream>

void accelerate(double &speed, double amount) { speed *= amount; }

int main() {
  double speed = 100.0;
  accelerate(speed, 1.2);
  std::cout << "speed is: " << speed << std::endl;
}
