//Вывести на экран ряд чисел Фибоначчи,
//состоящий из N элементов.


#include <iostream>

int main() {
    int N;
    std::cout << "Enter some N: ";
    std::cin >> N;
    while (N < 0) {
        std::cout << "Nah, man. Enter some positive N: ";
        std::cin >> N;
    }
    int a = 1;
    int b = 1;
    for (int i = 1; i <= N; i++) {
        if (i == 1 || i == 2) std::cout << 1 << ' ';
        else {
            int c = a + b;
            std::cout << c << ' ';
            a = b;
            b = c;
        }
    }
}