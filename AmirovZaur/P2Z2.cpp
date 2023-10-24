#include <iostream>

int main()
{
    std::locale::global(std::locale(""));

    int number, reversedNumber = 0;

    std::cout << "Введите число: ";
    std::cin >> number;

    while (number != 0) 
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    std::cout << "Число с обратным порядком цифр: " << reversedNumber << std::endl;

    return 0;
}