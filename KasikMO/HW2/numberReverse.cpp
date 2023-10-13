#include <iostream>

int n;

int main()
{
    std::cout << "Введите число для разворота:" << std::endl;
    std::cin >> n;
    int out = 0;
    int k = 1;

    while (n > 0) {
        out *= 10; out += n % 10;
        n /= 10;
    }
    std::cout << out;

}