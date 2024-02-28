#include <iostream>
#include <vector>
#include <algorithm>

class Lambda {
private:
    char beginchar;
public:
    Lambda(char beginchar) : beginchar(beginchar) {}
    bool operator()(const std::string& stringdata) const {
        return stringdata[0] == beginchar;
    }
};

int main() {
    std::vector<std::string> strings = {"Hello", "World", "Baby", "GameDev", "Is", "Cool", "Hashbrown"};
    char symbol;
    std::cout << "Enter symbol: ", std::cin >> symbol;
    Lambda predicate(symbol);
    int result = std::count_if(strings.begin(), strings.end(), predicate);
    std::cout << result << std::endl;
    return 0;
}

