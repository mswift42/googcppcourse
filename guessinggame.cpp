// guessinggame
// guess a random number between 0 - 100.

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int rand_number() {
  srand (time(NULL));
  return rand() % 101;
}

int main() {
  int input_var = 0;
  int target = rand_number();
  while (true) {
    cout << "Guess a number between 0 and 100: ";

    if (!(cin >> input_var ) || input_var > 100 || input_var < 0) {
      cout << "You need to enter a number between 0 and 100!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    if (input_var > target) {
      cout << "Your guess is too high!" << endl;
    } else if (input_var < target) {
      cout << "Your guess is too low!" << endl;
    } else if (input_var == target) {
      cout << "Congratulations, You guessed the correct number!" << endl;
      return 0;
    }
  
  }
  return -1;
}




