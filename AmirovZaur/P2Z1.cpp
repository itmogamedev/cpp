#include <iostream>

using namespace std;

int main() 
{
    locale::global(locale(""));

	int N, a = 0, b = 1;

    cout << "Введите количество элементов ряда Фибоначчи: ";
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cout << b << " ";

        int temp = b;
        b = a + b;
        a = temp;
    }

    cout << endl;
    return 0;
}