#include <iostream>
using namespace std;
int main(){
	int number;
	std::cin >> number;
	switch (number)
	{
		case 0: 
		std::cout << 'z';
		case 1:
		std::cout << 'o';
		break;
		case 2:
		std::cout << 't';
		break;
		case 3:
		std::cout << 't';
		break;
		case 4:
		std::cout << 'f';
		break;
		case 5:
		std::cout << 'f';
		break;
		case 6:
		std::cout << 's';
		break;
		case 7:
		std::cout << 's';
		break;
		case 8:
		std::cout << 'e';
		break;
		case 9:
		std::cout << 'n';
		break;
		default:
		std::cout << "Not a single-digit number";
	}
return 0;
}