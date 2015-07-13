// hello2.cpp
// display hw 4 x 6 times, in a field of 17 spaces,
// but left-align field.

#include <iostream>
using namespace std;

int main() {
  string hw = "Hello World!";
  cout.flags (ios::left);
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      cout.width(17);
      cout << hw;
    }
    cout << endl;
  }
  return 0;
}
