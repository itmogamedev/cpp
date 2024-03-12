// Задача: сделать с помощью switch-case преобразователь цифры в первый символ слова, которое это цифру обозначает.

#include <iostream>

int main() {
    int number;

    std::cout << "Input some number from 0 to 9: ";

    std::cin >> number;

    std::cout << "\nThe first letter of this number is ";

    switch (number) {
        case 1:
            std::cout << 'O';
            break;
        case 2:
            std::cout << 'T';
            break;
        case 3:
            std::cout << 'T';
            break;
        case 4:
            std::cout << 'F';
            break;
        case 5:
            std::cout << 'F';
            break;
        case 6:
            std::cout << 'S';
            break;
        case 7:
            std::cout << 'S';
            break;
        case 8:
            std::cout << 'E';
            break;
        case 9:
            std::cout << 'N';
            break;
        case 0:
            std::cout << 'Z';
            break;
        default:
            std::cout << "W, from 'Why can't you just do as I asked you'";
            break;
    }
}

