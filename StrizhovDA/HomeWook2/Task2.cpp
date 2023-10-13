#include <iostream>>

int main() {
    int n;
    std::cin >> n;
    if (n < 0) {
        std::cout << -;
    }
    n = abs(n);
    while (n > 0) {
        std::cout << n % 10;
        n = n / 10;
    }
}