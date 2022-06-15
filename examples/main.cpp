#include <iostream>

int getRandomNumber() {
  return 42;  // chosen by fair dice roll.
              // guaranteed to be random.
}

int unformatted(){
    return 0;
}

int main() {
  auto rnd = getRandomNumber();
  std::cout << rnd << std::endl;
}