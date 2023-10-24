
#include <iostream>
#include <string>

void reverseConverter(int inputN)
{
    int total = 0;
    
    while (inputN) {
        total = total * 10 + inputN % 10;
        inputN /= 10;
    }
    std::cout << total;

        
    
}

int main()
{
    int inputN;
    std::cout << "Write your number that you want convert - ";
    std::cin >> inputN;
    std::cout << std::endl << "Your answer - ";
    reverseConverter(inputN);

}
