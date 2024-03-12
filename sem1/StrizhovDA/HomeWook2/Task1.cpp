#include <iostream>>

int main() {
    int arru[100];
    int n,a = 1;
    arru[0] = 0;
    arru[1] = 1;
    for (int i = 2; i < 100; i++) {
        arru[i] = arru[i - 2] + arru[i - 1];
    }
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << arru[i]<< " ";
    }
}