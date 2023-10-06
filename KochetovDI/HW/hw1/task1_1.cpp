// переполнение по типу char
/*
#include <iostream>
int main() {
    const char maxChar = 127;
    std::cout << "maxChar = " << maxChar << std::endl;
    std::cout << "maxChar = " << maxChar + 2;
    return 0;
}
// переполнение по типу double
 */
#include <iostream>
#include <cmath>
int main() {
    const double maxDouble = 1.7;
    std::cout << "maxDouble = " << maxDouble << std::endl;
    std::cout << "maxDouble = " << pow (maxDouble,10000000000000000000000.0);
    return 0;
}