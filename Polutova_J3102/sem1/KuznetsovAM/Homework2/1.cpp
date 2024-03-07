#include <iostream>

int main()
{
    int n = 0;
    int n1 = 1;
    int n2 = 1;
    int n3 = 1;
    std::cin >> n;
    for (std::cout << n1 << " " << n2 << " " ; n > 2; n--){
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        std::cout << n3 << " ";
    }
}
