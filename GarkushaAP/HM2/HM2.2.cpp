#include <iostream>
#include <cmath>
int main()
{
	int N,p=1,k=0;
	std::cin >> N;
	while (p <= N)
	{
		p = p * 10;
		k = k + 1;
	}
	int new_chislo=0, i1;
	for (int i = k; i > 0; i = i - 1)
	{
		i1 = N % 10;
		N = N / 10;
		new_chislo = new_chislo + i1*(pow(10,i-1));
	}
	std::cout << new_chislo;
	return 0;
}
