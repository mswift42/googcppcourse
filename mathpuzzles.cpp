// mathpuzzles.cpp

#include <iostream>
using namespace std;

int arrange_books(int n) {
  int sum = 1;
  for (int i = 1;i<=n;i++) {
    sum *= i;
  }
  return sum;
}

int main() {
  cout << arrange_books(6) << endl;
}
