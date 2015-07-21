// practicewithpointers.cpp

#include <iostream>

int main() {
  int my_int = 46;

  int *my_pointer = &my_int;
  std::cout << my_int << std::endl;

  *my_pointer = 107;
  std::cout << my_int << std::endl;
  std::cout << *my_pointer << std::endl;
}
