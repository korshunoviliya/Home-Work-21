#include <iostream>

void evenDigits (long long a, int& ans) {
  
  if (a % 2 == 0) ans++;
  if (a > 0) evenDigits (a/10, ans);
  
}

int main() {
  long long number = 9223372036854775806;
  int ans = 0;
  evenDigits(number, ans);
  std::cout << ans << std::endl;
}
