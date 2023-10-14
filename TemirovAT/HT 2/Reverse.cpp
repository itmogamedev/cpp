#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	int N;
	int rn = 0;
	string s = "";
	std::cout << "Enter the Num to reverse: "; //  123  =>  321
	std::cin >> N;
	while (N > 0)
	{
		rn = rn * 10 + N % 10;
		N = N / 10;
	}
	std::cout << rn;
	return 0;
}