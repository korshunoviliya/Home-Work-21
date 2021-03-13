#include <iostream>

int jump (int step) {

  if (step < 0) return 0;
    else if (step == 0) return 1;
  return (jump(step - 3) + jump(step - 2) + jump(step - 1));
}

int main() {
  int step;
  std::cout << "Enter the number of steps: ";
  std::cin >> step;

  std::cout << jump(step);
}