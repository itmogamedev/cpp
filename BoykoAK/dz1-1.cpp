#include <iostream>
int main() {
	std::cout << "Perepolnenie po char: ";
	char a = 256;
	std::cout << a;

	std::cout << "Perepolnenie po double: ";
	double b = 1.7976931348623157E+308;
	b *= 2;
	std::cout << b;
}