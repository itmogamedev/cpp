
#include <iostream>
void methodFibanachi(int inputN) {
    //Fn = Fn-1 + Fn-2 - Формула

    int numberN0 = 0;
    int total = 0;
    int n = 0;
    for (int numberN1 = 1;n != inputN;n++) {
        total = numberN1 + numberN0;
        numberN0 = numberN1;
        numberN1 = total;
    }
    std::cout << "Fibanachi number by index (index begin's with 1) - " << inputN << " = " << total;
}


int main()
{
    int inputN;
    std::cout << "Write a number N - it would be index of the Fibanachi number, that you googled = ";
    std::cin >> inputN;
    methodFibanachi(inputN);
}

