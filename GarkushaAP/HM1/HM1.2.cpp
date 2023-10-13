#include <iostream>
using namespace std;
int main()
{
	int j;
	setlocale(LC_ALL, "RUS");
	printf("Введите цифру: ");
	cin >> j;
	switch (j)
	{
	case 0:
		cout << 'z';
		break;
	case 1:
		cout << 'o';
		break;
	case 2:
	case 3:
		cout << 't';
		break;
	case 4:
	case 5:
		cout << 'f';
		break;
	case 6:
	case 7:
		cout << 's';
		break;
	case 8:
		cout << 'e';
		break;
	case 9:
		cout << 'n';
		break;
	default:
		cout << "Неправильный ввод";
	}
	return 0;
}