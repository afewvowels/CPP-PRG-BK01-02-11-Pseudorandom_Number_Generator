#include "randomGenerator.h"
#include <iostream>

using namespace std;

RandomGenerator::RandomGenerator(int mult,int inc,int mod,int s) {
  multiplier = mult;
  increment = inc;
  modulus = mod;
  seed = s;
}
RandomGenerator::RandomGenerator(int s) {
  multiplier = 1234;
  increment = 456;
  modulus = 789;
}
RandomGenerator::RandomGenerator() {
  multiplier = 1234;
  increment = 456;
  seed = 678;
  modulus = 123;
}

void RandomGenerator::generateRandomNumber() {
  number = (multiplier*seed+increment)%modulus;
  seed = number;
}

int RandomGenerator::returnRandomNumber() {
  return number;
}

void RandomGenerator::setSeedValue(int s) {
  seed = s;
}

int RandomGenerator::generateAndReturnRandomNumber() {
  number = (multiplier*seed+increment)%modulus;
  seed = number;
  return number;
}

void RandomGenerator::setHighestNumber(int m) {
  modulus = m;
}
