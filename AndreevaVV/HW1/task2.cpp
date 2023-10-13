#include <iostream>

using namespace std;

int main()
{
    char input;
    std::cout << "do you wanna figure?";
    std::cin >> input;

    switch (input) {
    case '0':
        std::cout << "z";
        break;
    case '1':
        std::cout << "o";
        break;
    case '2':
        std::cout << "t";
        break;
    case '3':
        std::cout << "t";
        break;
    case '4':
        std::cout << "f";
        break;
    case '5':
        std::cout << "f";
        break;
    case '6':
        std::cout << "s";
        break;
    case '7':
        std::cout << "s";
        break;
    case '8':
        std::cout << "e";
        break;
    case '9':
        std::cout << "n";
        break;
    }

    return 0;
}