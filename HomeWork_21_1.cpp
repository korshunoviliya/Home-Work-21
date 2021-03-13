#include <iostream>
#include <vector>

const int arrSize = 5;

void swapvec (int* a, std::vector<int>& vec) {

  int temp = 0;
  for (int i = 0; i < arrSize; i++){
    temp = *(a + i);
    *(a + i) = vec[i];
    vec[i] = temp;
  }
}

int main() {
  std::vector<int> vect = {10, 15, 20, 25, 30};
  int a[arrSize] = {1, 2, 3, 4, 5};

  swapvec(a, vect);

  for (int i = 0; i < arrSize; i++){
  std::cout << vect[i] << " " << a[i] << std::endl;
  }
}  