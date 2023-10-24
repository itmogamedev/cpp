#include <iostream>

int main()
{

    // PROBLEM ¹2

    std::cout << "Reverse the number\n";

    int n;
    std::cout
        << "Enter a number: ";
    std::cin
        >> n;

    int reminder = 0, revNumber = 0;

    if (n == 0)
        std::cout << "Answer is 0";
    else {
        while (n) {
            reminder = n % 10;
            n /= 10;
            revNumber = (revNumber * 10) + reminder;
        }
        std::cout << "Answer is " << revNumber;
    }

    std::cout << "\nThe programm has completed.\n";

    return 0;
}