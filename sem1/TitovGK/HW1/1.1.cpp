#include <iostream>
#include <cmath>

int main() {
	//Переполнение char:
	char s1 = 127, s2 = -128;
	std::cout << s1 << std::endl;
	std::cout << (char)(s1 + 1) << std::endl;
	std::cout << s2 << std::endl;
	std::cout << (char)(s2 - 1) << std::endl;

	// Переполнение double:
	double num = 143;
	std::cout << pow(num, num) << std::endl;
	std::cout << pow(num + 1, num + 1) << std::endl;

	return 0;
}