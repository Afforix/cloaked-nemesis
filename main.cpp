#include <iostream>

int fact(int val) {
	return val == 0 ? 1 : val*fact(val-1);
}

int main() {
	std::cout << fact(5) << std::endl;
	return 0;

}
