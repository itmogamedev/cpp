#include <iostream>

constexpr bool bSHOWFIRSTZERO = true; // если не хочется показывать первый ноль, всегда можно убрать
int main()
{
    int N = 0;
    std::cin >> N;
    bool flagFirstZero = (N % 10 == 0) && bSHOWFIRSTZERO;
    int newNum = 0;
    
    while (N != 0)
    {
        newNum *= 10;
        newNum += N % 10;
        N /= 10;
    }
    
    if (flagFirstZero)
        std::cout << 0;
    std::cout << newNum << std::endl;
    return 0;
}
