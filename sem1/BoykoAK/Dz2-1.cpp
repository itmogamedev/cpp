#include <iostream>

int main()
{
    int N = 0;
    std::cout << "Input Fibonacci sequence length (N>0): ";
    std::cin >> N;
    int ch1 = 0;
    int ch2 = 1;
    if (N <= 0) {
        std::cout << "Incorrect Number";
        return 0;
    }
    if (N == 1) {
        std::cout << ch1 << std::endl;
        return 0;
    }
    std::cout << ch1 << std::endl;
    std::cout << ch2 << std::endl;
    for (int i = 2; i < N; i++) {
        int sum = ch1 + ch2;
        std::cout << sum << std::endl;
        ch1 = ch2;
        ch2 = sum;
    }
    }
 