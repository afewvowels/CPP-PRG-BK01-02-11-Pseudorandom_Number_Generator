#ifndef _RANDOMGENERATOR_H
#define _RANDOMGENERATOR_H

// using namespace std;

class RandomGenerator {
public:
  RandomGenerator(int mult,int inc,int mod,int s);
  RandomGenerator(int mod);
  RandomGenerator();

  void generateRandomNumber();
  int returnRandomNumber();
  void setSeedValue(int s);
  int generateAndReturnRandomNumber();
  void setHighestNumber(int m);
private:
  int multiplier;
  int seed;
  int increment;
  int modulus;
  int number;
};

#endif
