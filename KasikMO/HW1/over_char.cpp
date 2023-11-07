#include <iostream>


int main()
{
    char c;
    c = 'A';
    for (int i = 0; i < 300; i++){
        std::cout << (int)c << " ";
        std::cout << c << std::endl; // переполнение после 127 на -128.
        // отрицательные значения не распознаются как символы
        // от 0 до 32 - непечатаемые символы
        c++;
    }

    return 0;
}
