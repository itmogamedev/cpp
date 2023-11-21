#include <iostream>
int main() {
    int num;
    std::cin >> num;
    while(num > 0){
        std::cout << num % 10;
        num = num/10;
    }
}