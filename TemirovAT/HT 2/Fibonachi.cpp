#include <iostream>
#include <list>
using namespace std;

int main()
{
	int N, i;
	int a = 0;
	int b = 1;
	std::cout << "Enter the num: ";
	std::cin >> N;
	if (N == 0)
	{
		return 0;
	}
	for (i = 1; i <= N; i++)
	{
		if (i == 1)
		{
			std::cout << 0 << endl;
		}
		if (i == 2)
		{
			std::cout << 1 << endl;
		}
		if (i % 2 != 0 and i != 1)
		{
			std::cout << a + b << endl;
			a = a + b;
		}
		if (i % 2 == 0 and i != 2)
		{
			std::cout << a + b << endl;
			b = a + b;
		}
	}
	return 0;


}