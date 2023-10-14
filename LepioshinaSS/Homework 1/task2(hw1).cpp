//—делать с помощью switch - case преобразователь цифры в первого символа цифры.
//Ќапример: У1Ф превратить в УoФ(one)

#include <iostream>

int main()
{
	setlocale(LC_ALL, ""); //включила кириллицу
	int input = 0;
	std::cout << "¬ведите цифру: ";
	std::cin >> input;

	switch (input)
	{
	case 1:
		std::cout << "O";
		break;
	case 2:
		std::cout << "T";
		break;
	case 3:
		std::cout << "TH";
		break;
	case 4:
		std::cout << "F";
		break;
	case 5:
		std::cout << "F";
		break;
	case 6:
		std::cout << "S";
		break;
	case 7:
		std::cout << "S";
		break;
	case 8:
		std::cout << "E";
		break;
	case 9:
		std::cout << "N";
		break;
	case 0:
		std::cout << "Z";
		break;
	}
}