#include <iostream>
#include <vector>
#include "MathService.h" // Подключение библиотеки

int main() {
    // Создание вектора чисел
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Вызов функции для подсчета среднего арифметического
    double meanResult = mean(numbers);
    std::cout << "Mean: " << meanResult << std::endl;

    // Вызов функции для подсчета медианы
    double medianResult = median(numbers);
    std::cout << "Median: " << medianResult << std::endl;

    // Вызов функции для подсчета среднего квадратического
    double medianSquaredResult = medianSquared(numbers);
    std::cout << "Median Squared: " << medianSquaredResult << std::endl;

    // Вызов функции для подсчета дисперсии
    double varianceResult = variance(numbers);
    std::cout << "Variance: " << varianceResult << std::endl;

    return 0;
}

