#include <iostream>
int main() {
    int n, a;
    std::cin >> n;
    while (n > 0) {
        a = n % 10;
        std::cout << a;
        n = n / 10;
    }

    return 0;
}