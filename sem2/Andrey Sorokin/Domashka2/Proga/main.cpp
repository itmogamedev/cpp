#include <iostream>
#include "..\Domashka2\Header.h"
using namespace std;

int main()
{
    int n = 15;
    int ryad[15]{ 2, 5, 7 ,16, 22, 9, 17, 23, 11, 12, 5, 9, 11, 15, 20 };

    setlocale(LC_ALL, "RU");

    cout << "\t������� ��������������: " << mid(ryad, n) << endl;
    cout << "\t�������: " << med(ryad, n) << endl;
    cout << "\t������� ��������������: " << midkv(ryad, n) << endl;
    cout << "\t���������: " << disp(ryad, n) << endl;
}
