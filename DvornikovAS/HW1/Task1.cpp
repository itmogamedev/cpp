#include <iostream>
#include <limits>
#include <math.h>

int main() {

    std::cout << "Overflow by Char type\n\n";

    int minValue = std::numeric_limits<char>::min();
    int maxValue = std::numeric_limits<char>::max();
    std::cout << "min of char = " << minValue << " " <<
        "min char = '" << (char)minValue << "'" << std::endl <<
        "max of char = " << maxValue << " " <<
        "max char = '" << (char)maxValue << "'" << std::endl << std::endl;

    char maxChar = (char)maxValue;
    std::cout << "max char = '" << maxChar << "'       int value = " << (int)(maxChar) << "\n";
    maxChar++;
    std::cout << "max char + 1 = '" << (char)maxChar << "'   int value = " << (int)maxChar << "\n";

    char minChar = (char)minValue;
    std::cout << "min char = '" << (char)minChar << "'       int value = " << (int)minChar << "\n";
    minChar--;
    std::cout << "min char - 1 = '" << (char)minChar << "'   int value = " << (int)minChar << "\n";

    std::cout << "\nThe programm 1 has completed.\n\n";

    std::cout << "Overflow by Double type\n\n";

    std::cout << "size of double = " << sizeof(double) << std::endl;

    double minValue1 = std::numeric_limits<double>::min();
    double maxValue1 = std::numeric_limits<double>::max();
    std::cout << "min of double = " << minValue << std::endl << "max of double = " << maxValue << std::endl << std::endl;

    double minDouble = -maxValue1;
    double maxDouble = maxValue1;
    
    std::cout << "max double   =   " << maxDouble << std::endl;
    maxDouble *= 2;
    std::cout << "max double + 1 = " << maxDouble << std::endl;

    std::cout << "min double   =   " << minDouble << std::endl;
    minDouble *= 2;
    std::cout << "min double - 1 = " << minDouble << std::endl;
    
    std::cout << "\nThe programm has completed.\n\n";

    return 0;

}