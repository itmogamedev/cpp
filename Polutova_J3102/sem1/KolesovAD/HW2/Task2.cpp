#include <iostream>

int main() {
	std::cout << "Enter the number you want to revert: ";
	int number;
	std::cin >> number;
	int sign;
	if (number < 0) {
		sign = -1;
	}
	else if (number == 0) {
		sign = 0;
	}
	else {
		sign = 1;
	}
	int pos_number = abs(number);
	int new_number = 0;
	while (pos_number > 0) {
		new_number = new_number * 10 + pos_number % 10;
		pos_number /= 10;
	}
	new_number *= sign;
	std::cout << "Reverted number: " << new_number;
	return 0;
}