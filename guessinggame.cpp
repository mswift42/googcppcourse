// guessinggame
// guess a random number between 0 - 100.

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
  cout << "Guess a number between 0 "
  
}




