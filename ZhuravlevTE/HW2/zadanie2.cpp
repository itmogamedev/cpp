#include <iostream>

int main() {
	int n;
	int lastn = 0;
	int revn = 0;

	std::cout << "Enter a number: ";
	std::cin >> n;

	while (n != 0) {
		lastn = n % 10;
		revn = revn * 10 + lastn;
		n = n / 10;
	}

	std::cout << "New number: " << revn;

	return 0;
}
