#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<std::string> stroki;
    std::cout << "Введите строки (каждая с новой строки, для завершения введите на новой строке '.'):\n";
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == ".") {
            break;
        }
        stroki.push_back(input);
    }
    char Symbol;
    std::cout << "Введите символ: ";
    std::cin >> Symbol;

    int quontity = std::count_if(stroki.begin(), stroki.end(), [&Symbol](const std::string &stroki) {
        return not(stroki.empty()) and stroki.front() == Symbol; });
    std::cout << "Количество строк, начинающихся с символа '" << Symbol << "': " << quontity << std::endl;
    return 0;
};