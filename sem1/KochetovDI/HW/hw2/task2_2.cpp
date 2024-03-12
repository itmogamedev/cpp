#include <iostream>
#include <cmath>
long int input = 0;
long int output = 0;
long int counterDigits(long int number);
int main()
{
    std::cout<<"Введите число: ";
    if (std::cin >> input) {
        long int counter = counterDigits (input);
        while (input > 0) {
            output = output + (input % 10) * pow(10, counter);
            input = input / 10;
            counter--;
        }
        std::cout<<output;
    }
    else
        std::cout<<"Число введено неверно! Попробуйте еще раз.";
    return 0;
}
long int counterDigits(long int number) {
    long int counter = -1;
    while (number > 0) {
        counter++;
        number = number / 10;
    }
    return counter;
}