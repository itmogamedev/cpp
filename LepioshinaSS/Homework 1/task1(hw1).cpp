//Сделать переполнение по типу char и вывести в терминал результат.
//Дополнительно: переполнение по типу double.

#include <iostream>

int main()
{
	char a1 = 129;
	char a2 = -127;
	std::cout << "a1 = " << a1 << std::endl;
	std::cout << "a2 = " << a2 << std::endl;

	double n = 1.7E+308 * 2;
	std::cout << n << std::endl;

	return 0;
}