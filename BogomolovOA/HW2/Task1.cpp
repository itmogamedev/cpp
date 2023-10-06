#include <iostream>
#include <math.h>

int main()
{
    int N = 0;
    std::cin >> N;
    if (N <= 0) // возвращаем пустую последовательность при неположительном N
        return 0;
    
    /// напрямую
    int fib1 = 0, fib2 = 1;
    std::cout << "Fib through a normal cycle | ";
    for (int i = 0; i < N; i++)
    {
        std::cout << fib2 << " ";
        int tmp = fib1 + fib2;
        fib1 = fib2;
        fib2 = tmp;
    }
    std::cout << std::endl;
    // через радикалы
    std::cout << "Fib through radicals       | ";
    for (int i = 1; i <= N; i++)
        std::cout << round(pow((1 + sqrt(5))/2, i) / sqrt(5)) << " ";
    std::cout << std::endl;
    return 0;
}
