#include <iostream>

int main() {
    double number = 1.7e308;  // Максимальное значение для типа double
    std::cout << number << std::endl;

    double result = number * 2;  // Попытка умножить переменную на 2
    std::cout  << result << std::endl;

    return 0;
}