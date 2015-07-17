// artillery.cpp
// fire with a cannon at an enemy.

#include <iostream>
#include <cmath>

#define Velocity 200.0 // velocity in ft / second.
#define Gravity 32.2

double timeInAir(double angle) {
  return (2.0 * Velocity * sin(angle)) / Gravity;
}

int distance(double angle) {
  angle = M_PI * angle / 180;
  return (int) round(Velocity * cos(angle) * timeInAir(angle));
}

void printIntroduction() {
  std::cout << "Welcome to Artillery" << std::endl;
  std::cout << "You are in the middle of a war and being charged by thousands of enemies." << std::endl;
  std::cout << "You have one cannon, which you can shoot at any angle." << std::endl;
  std::cout << "You only have 10 cannonballs for this target.." << std::endl;
  std::cout << "Let's begin..." << std::endl;
}


