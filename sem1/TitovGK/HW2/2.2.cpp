#include <iostream>

void ReversInt(int n) {
	while (n != 0) {
		std::cout << n % 10;
		n /= 10;
	}
}

int main() {
	int num;
	std::cin >> num;
	ReversInt(num);

	return 0;
}