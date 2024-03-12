#include <iostream>

int main() {
	std::cout << "Enter the amount of Fibbonacci numbers that has to be printed: ";
	int fib_count;
	bool flag = false;
	while (not flag) {
		std::cin >> fib_count;
		if (fib_count < 0) {
			std::cout << "The negative amount of numbers can't be printed :(" << std::endl << "Please, try again: ";
		}
		else if (fib_count == 0) {
			std::cout << "0 numbers. Well, ok -_-" << std::endl;
			flag = true;
		}
		else if (fib_count == 1) {
			std::cout << 1 << "." << std::endl;
			flag = true;
		}
		else {
			std::cout << 1 << ";" << 1;
			int prev_prev_fib_number = 1;
			int prev_fib_number = 1;
			int fib_number;
			for (int i = 2; i < fib_count; i++) {
				fib_number = prev_prev_fib_number + prev_fib_number;
				std::cout << ";" << fib_number;
				prev_prev_fib_number = prev_fib_number;
				prev_fib_number = fib_number;
			}
			std::cout << "." << std::endl;
			flag = true;
		}
	}
	return 0;
}