#include <iostream>

int main()
{
	int a, b=0, tmp;
	std::cin >> a;
	while (a >= 1) {
		tmp = a % 10;
		a /= 10;
		b = b * 10 + tmp;
	}
	std::cout << b;
}

