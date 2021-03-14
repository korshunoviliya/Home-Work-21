#include <iostream>

int jump (int step, int maxJump = 3)
{
	if (step < 0) return 0;
	  else if (step == 0) return 1;

	int way = 0;
	for (int i = maxJump; i > 0; --i){
		way += (jump(step - i, maxJump));
  }
	return way;
}

int main() {
  std::cout << "Enter the number of steps: ";
	int step;
	std::cin >> step;

	std::cout << "Enter max jump over steps: ";
	int maxJump;
	std::cin >> maxJump;
  
  if (maxJump <= 0)
  	  std::cout << "The rabbit has " << jump(step) << " ways." << std::endl;
	else
     std::cout << "The rabbit has " << jump(step, maxJump) << " ways." << std::endl;
}