#include <iostream>
#include <vector>

void swapvec (int* a, std::vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++){
    int temp = *(a + i);
    *(a + i) = vec[i];
    vec[i] = temp;
  }
}

int main() {
  std::vector<int> vect = {10, 15, 20, 25, 30};
  int a[5] = {1, 2, 3, 4, 5};
  swapvec(a, vect);
  for (int i = 0; i < vect.size(); i++){
  std::cout << vect[i] << " " << a[i] << std::endl;
  }
}  