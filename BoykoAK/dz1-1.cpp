#include <iostream>
int main() {
	std::cout << "char overflow: ";
	char a = 256;
	std::cout << a;

	std::cout << "double overflow: ";
	double b = 1.7976931348623157E+308;
	b *= 2;
	std::cout << b;
}