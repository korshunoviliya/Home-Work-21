#include <iostream>

/*void evenDigitsIter (long long a, int& ans)
{
  for (int i = 0; a > 0; i++){
    if ((a%10) % 2 == 0) ans++;
    a /= 10;
  }
}*/

void evenDigits (long long a, int& ans)
{
  if ((a%10) % 2 == 0) ans++;
  if (a > 10) evenDigits (a/10, ans);
}

int main() {
  long long number = 9223372036854775806;
  int ans = 0;
  evenDigits(number, ans);
  std::cout << ans << std::endl;
}
