#include <fenv.h>
#include <iostream>

constexpr int INT_BARSIZE = 60;
int main()
{
    // unreadable char overflow, оно серьезно костыльное чтобы проверки работали как должны
    // I - перевод char+int в char и в int чтобы показать его новый номер после переполнения
    // II - сравнение I с переводом char+int в char, чтобы показать номер, который может получиться при переполнении
    /// III - если I и II не равны => переполнение
    unsigned char testchar = 'x';
    constexpr int INT_MOVE = 224;
    bool overflowChar = false;
    
    std::cout << "CHAR OVERFLOW TEST" << std::endl;
    overflowChar = (int)testchar != (int)((char)testchar);
    std::cout << "Original char: " << testchar << " (smol - DEC " << (int)testchar << ")"  << " | " << (overflowChar ? "OVERFLOW ON CHAR" : "NO OVERFLOW ON CHAR") << std::endl;
    overflowChar = ((int)(testchar) + INT_MOVE) != (int)((char)(testchar + INT_MOVE));
    std::cout << "Modified char: " << (char)(testchar + INT_MOVE) << " (big - DEC " << (int)((char)(testchar + INT_MOVE)) << ")"   << " | " << (overflowChar ? "OVERFLOW ON CHAR" : "NO OVERFLOW ON CHAR") << std::endl;
    
    for (int i = 0; i < INT_BARSIZE; i++)
        std::cout << '|';
    std::cout << std::endl;
    
    // even more unreadable double overflow
    // тут меньше костылей, в cfenv есть рабочее решение для double
    std::feclearexcept(FE_OVERFLOW);
    std::feclearexcept(FE_UNDERFLOW);
    bool overflowDouble = false;
    double testdouble = 100.f;
    
    std::cout << "DOUBLE OVERFLOW TEST" << std::endl;
    overflowDouble = (bool)std::fetestexcept(FE_OVERFLOW);
    std::cout << "Original double: " << testdouble << " | " << (overflowDouble ? "OVERFLOW ON DOUBLE" : "NO OVERFLOW ON DOUBLE") << std::endl;
    for (int i = 0; i < 10; i++)
        testdouble *= testdouble;
    overflowDouble = (bool)std::fetestexcept(FE_OVERFLOW);
    std::cout << "Modified double: " << testdouble << " | " << (overflowDouble ? "OVERFLOW ON DOUBLE" : "NO OVERFLOW ON DOUBLE") << std::endl;
    
    for (int i = 0; i < INT_BARSIZE; i++)
        std::cout << '|';
    std::cout << std::endl;
    std::cout << (overflowChar && overflowDouble ? "ALL GOOD THAT OVERFLOWS GOOD" : "bing chilling error, somehow it didn't overflow") << std::endl;
    return 0;
}
