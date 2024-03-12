#include <iostream>

int main() {
	char number1 = 127;
	char char1 = -128;
	double number2 = 1.7E+308;
	char newnumber = 0;

	newnumber = number1 + 1;
	if (newnumber == char1) {
		std::cout << "Сhar overflow: " << char1 << std::endl;
	}

	number2 = number2 * 54;
	std::cout << "Double overflow: " << number2 << std::endl;

	return 0;
}
