#include <iostream>

int Fibonacci(int num) {
	if (num <= 2) {
		return 1;
	}
	else {
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int main() {
	int n;
	std::cin >> n;
	for (int i = 1; i != (n + 1); ++i) {
		std::cout << Fibonacci(i) << " ";
	}


	return 0;
}