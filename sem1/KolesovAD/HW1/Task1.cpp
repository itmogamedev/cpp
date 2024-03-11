#include <iostream>

int main() {
	// char overflow
	char symbol1 = 128; // with overflowing
	char symbol2 = -128; // same without overflowing
	std::cout << symbol1 << std::endl;
	std::cout << symbol2 << std::endl;
	std::cout << (symbol1 == symbol2) << std::endl; // equal check
	// double overflow
	double number = 1.7E+308 * 10;
	std::cout << number << std::endl;
	return 0;
}