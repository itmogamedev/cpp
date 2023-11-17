#include <iostream>
#include <vector>
int main()
{
	int N;
	std::cout << "Enter a number\n";
	std::cin >> N;
	if (N <= 0)
	{
		std::cout << "Wrong number";
	}
	else if (N == 1)
	{
		std::cout << "1";
	}
	else
	{
		std::vector<int> array(N);
		array[0] = 1, array[1] = 1;
		for (int i = 2; i < N; i = 1 + i)
			array[i] = array[i - 1] + array[i - 2];
		int i = 0;
		while (i < N)
		{
			std::cout << array[i] << " ";
			i++;
		}
	}
	return 0;
}
