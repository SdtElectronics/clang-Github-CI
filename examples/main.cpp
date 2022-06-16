#include <iostream>

int getRandomNumber() {
  return 42;  // chosen by fair dice roll.
              // guaranteed to be random.
}

int nullDereference(int *p) {
  if (p) return 0;
  return 1;
  // return p[0];
}

int main() {
  auto rnd = getRandomNumber();
  std::cout << rnd << std::endl;
}