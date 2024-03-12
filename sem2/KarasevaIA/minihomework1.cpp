#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
	std::vector<std::string> v;
	int n, result;
	std::string line;
	char symbol;
	std::cout << "Сколько строк в векторе? ";
	std::cin >> n;

	std::cout << "Введите строки: ";
	std::getline(std::cin, line);
	for (int i = 0; i < n; i++) {
		std::getline(std::cin, line);
		v.push_back(line);
	}

	std::cout << "Введите символ: ";
	std::cin >> symbol;

	result = std::count_if(v.begin(), v.end(), [symbol](std::string s) {
		return s.at(0) == symbol;
		});

	std::cout << "Строк, начинающихся с символа " << symbol << ", - " << result << std::endl;
	return 0;
}