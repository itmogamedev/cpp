#include <iostream>
#include <math.h>
int Fibonachi(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    return (Fibonachi(n - 1) + Fibonachi(n - 2));
}

int main()
{
    std::cout << "Task 1 - Fibonachi:\n\n";
    
    int n;
    std::cout << "Write your number: ";
    std::cin >> n;
    std::cout << "\nAnswer: " << Fibonachi(n) << "\n\n";


    std::cout << "Task 2 - reveresed num:\n\n";
    int num;
    int revNum = 0;
    std::cout << "Write your number: ";
    std::cin >> num;
    
    while (num != 0)
    {
        revNum *= 10;
        revNum += num % 10;
        num /= 10;
    }
    
    std::cout << "\nAnswer: " << revNum;

}

