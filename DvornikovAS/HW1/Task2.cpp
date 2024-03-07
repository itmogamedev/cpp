#include <iostream>

int main() {

    std::cout << "Digital converter\n\n";

    for (int digit = 0; digit < 10; digit++) {
        std::cout << digit << " ";
        switch (digit) {
        case 0: std::cout << 'z';
            break;
        case 1: std::cout << "o";
            break;
        case 2:
        case 3: std::cout << "t";
            break;
        case 4:
        case 5: std::cout << 'f';
            break;
        case 6:
        case 7:
            std::cout << 's';
            break;
        case 8: std::cout << 'e';
            break;
        case 9: std::cout << 'n';
            break;
        default: std::cout << "Error 404";
        }
        std::cout << "\n";
    }

    std::cout << "\nThe programm has completed.\n\n";

    return 0;
}