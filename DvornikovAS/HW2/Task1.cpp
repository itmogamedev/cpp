#include <iostream>

int main()
{
    //PROBLEM ¹1

    std::cout << "The first N Fibonacci numbers\n";

    size_t size;

    std::cout
        << "Enter a number: ";
    std::cin
        >> size;

    double* array = new double[size];

    array[0] = 1;
    array[1] = 1;

    for (size_t i = 0; i <= size; i++) {

        if (i > 1)
            array[i] = array[i - 2] + array[i - 1];

        std::cout
            << array[i] << " ";

    }

    //delete[] array; this thing frees memory, but it causes VS to crash, so I've commented it out.

    std::cout << "\nThe programm has completed.\n\n";

    return 0;
}
