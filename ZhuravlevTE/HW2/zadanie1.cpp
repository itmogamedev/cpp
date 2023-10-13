#include <iostream>

int main() {
    int a = 0;
    int b = 1;
    int c;
    int n;
    std::cout << "Type a N: ";
    std::cin >> n;
    if (n >= 1)
        std::cout << b << " ";
    for (int i = 0; i < n - 1; i++) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    std::cout << std::endl;
    return 0;
}
