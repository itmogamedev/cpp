#include <iostream>
int N = 0;
int FibonacciNumbers (int number);
int main()
{
    std::cout<<"Введите натуральное число N: ";
    if (std::cin >> N) {
        int cnt = 0;
        while (cnt < N) {
            if (cnt == 0 or cnt == 1) {
                std::cout<<"1"<<" ";
            }
            else
                std::cout<<FibonacciNumbers(cnt)<<" ";
            cnt++;
        }
    }
    else
        std::cout<<"Число введено неверно! Попробуйте еще раз.";
    return 0;
}
int FibonacciNumbers (int number) {
    if (number == 0 or number == 1) {
        return 1;
    }
    return FibonacciNumbers(number-2) + FibonacciNumbers(number-1);
}