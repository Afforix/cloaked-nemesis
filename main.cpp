#include <iostream>

int fact(int val) {
	return val == 0 ? 1 : val*fact(val-1);
}

int main() {
	std::cout << "5! = " << fact(5) << std::endl;
    std::cout << "7! = " << fact(7) << std::endl;
	return 0;
}
