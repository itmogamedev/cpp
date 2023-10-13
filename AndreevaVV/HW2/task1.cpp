#include <iostream>

int main() {

    int input;
    std::cout << "input n ";
    std::cin >> input;

    int one = 0;
    int two = 1;
    int other;

    if (input < 1) {
        return 0;
    }
    if (input == 1) {
        std::cout << "0 1";
    }
    if (input > 1) {
        std::cout << "0 1 ";
        for (int x = 0; x < input - 2; x++) {
            other = one + two;
            one = two;
            two = other;
            std::cout << " " << other << " ";
        }
    }
}