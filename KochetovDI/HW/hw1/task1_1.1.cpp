// переполнение по типу char

#include <iostream>

int main() {
    const char maxChar = 127;
    std::cout << "maxChar = " << maxChar << std::endl;
    std::cout << "maxChar = " << maxChar + 2;
    return 0;
}