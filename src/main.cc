#include <iostream>
#include "randomGenerator.h"

using namespace std;

int main() {
  RandomGenerator random(9999);

  cout << "Program ran\n";

  for(int i = 0 ; i < 10 ; i++) {
    cout << random.generateAndReturnRandomNumber() << endl;
  }

  random.setHighestNumber(22);

  for(int i = 0 ; i < 10 ; i++) {
    cout << random.generateAndReturnRandomNumber() << endl;
  }

  return 0;
}
