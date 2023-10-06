#include <fenv.h>
#include <iostream>

int main()
{
    // char
    unsigned char startChar = 'x';
    constexpr int INT_MOVE = 224;
    unsigned char modifiedChar = (char)(startChar + INT_MOVE);
    int modifiedCharASCII = (int)startChar + INT_MOVE;
    
    std::cout << "CHAR OVERFLOW" << std::endl;
    std::cout << "Original char: " << startChar << " | DEC " << (int)startChar << std::endl;
    std::cout << "Modified char: " << modifiedChar << " | DEC " << (int)modifiedChar << std::endl;
    std::cout << (modifiedChar != modifiedCharASCII ? "overflows" : "doesn't overflow") << std::endl;

    for (int i = 0; i < 2; i++)
        std::cout << std::endl;
    
    // double
    std::feclearexcept(FE_OVERFLOW);
    double startDouble = 100.f;
    double modifiedDouble = startDouble;
    for (int i = 0; i < 10; i++)
        modifiedDouble *= modifiedDouble;
    
    std::cout << "DOUBLE OVERFLOW" << std::endl;
    std::cout << "Original double: " << startDouble << std::endl;
    std::cout << "Modified double: " << modifiedDouble << std::endl;
    std::cout << ((bool)std::fetestexcept(FE_OVERFLOW) ? "overflows" : "doesn't overflow") << std::endl;
    return 0;
}
