#include <windows.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char n;
    int x;
    std::cout << "Сколько у вас строк в векторе?" << std::endl;
    std::cin >> x;
    std::vector<std::string> vec(x);
    std::cout << "Введите сами строки плиз)" << std::endl;
    for (int i = 0; i < x; i++)
        std::cin >> vec[i];
    std::cout << "С какого символа должна начинаться строка?" << std::endl;
    std::cin >> n;
    int c = count_if(vec.begin(), vec.end(), [=](std::string s) {
        return s[0] == n;
    });
    std::cout << c << " - вот столько строк начинается с символа '" << n << "'";
}
