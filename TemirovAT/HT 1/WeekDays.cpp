#include <iostream>

int main() {

    int a;
    std::cout << "Enter the number: ";
    std::cin >> a;


    switch (a)
    {
    case 1:
        std::cout << "o";
        break;
    case 2:
    case 3:
        std::cout << "t";
        break;
    case 4:
    case 5:
        std::cout << "f";
        break;
    case 6:
    case 7:
        std::cout << "s";
        break;
    case 8:
        std::cout << "e";
        break;
    case 9:
        std::cout << "n";
        break;
    }

}