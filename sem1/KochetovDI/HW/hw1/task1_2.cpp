#include <iostream>
int main()
{
    int input = 0;
    std::cout << "Enter a number from 1 to 10: ";
    std::cin >> input;

    switch(input) {
        case 1:
            std::cout << "o";
            break;
        case 2:
            std::cout << "t";
            break;
        case 3:
            std::cout << "t";
            break;
        case 4:
            std::cout << "f";
            break;
        case 5:
            std::cout << "f";
            break;
        case 6:
            std::cout << "s";
            break;
        case 7:
            std::cout << "s";
            break;
        case 8:
            std::cout << "e";
            break;
        case 9:
            std::cout << "n";
            break;
        default:
            std::cout << "input error!";
    }
}
