#include <iostream>

int main() {

	int input;
	std::cout << "input n ";
	std::cin >> input;

	while (input > 0)
	{
		int x = input % 10;
		std::cout << x;
		input = input / 10;
	}
}