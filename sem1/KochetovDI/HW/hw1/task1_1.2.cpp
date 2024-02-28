// overflow by type double

#include <iostream>
#include <cmath>

int main() {
    const double maxDouble = 1.7;
    std::cout << "maxDouble = " << maxDouble << std::endl;
    std::cout << "maxDouble = " << pow (maxDouble,10000000000000000000000.0);
    return 0;
}