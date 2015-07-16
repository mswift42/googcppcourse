// calculate temperature
// by number of cricket chirps in a minute.

#include <iostream>
using namespace std;

double temperature(int chirps) {
  return (chirps + 40) / 4.0;
}

int main() {
  int chirps;
  cout << "Enter number of chirps a minute: "; cin >> chirps;
  cout << "The temperature is: " << temperature(chirps) << endl;
}
