#include <iostream>

int main()
{
	int a, y=0, x=1,i,tmp;
	std::cin >> a;
	for (i = 0; i < a; i++) {
		tmp = x + y;
		std::cout << (tmp) << ' ';
		y = x;
		x = tmp;
	}
}




