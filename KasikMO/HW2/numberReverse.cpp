#include <iostream>

int n;

int main()
{
    std::cout << "¬ведите число дл€ разворота:" << std::endl;
    std::cin >> n;
    int out = 0;
    int k = 1;

    while (n > 0) {
        out *= 10; out += n % 10;
        n /= 10;
    }
    std::cout << out;
    // цифры идут в обратном пор€дке, но про знак "-" ничего не сказано
    // так что при n < 0 он где был там и осталс€
}