#include <iostream>

int main()
{
    int N, a, b, c;
    a=0;
    b=1;
    c = a+b;
    std::cin >> N;
    std::cout << a << " " << b << " " <<  c << " ";
    while(N-3>0) {
        N--;
        a = b;
        b = c;
        c = a+b;
        std::cout << c << " ";
    }
}
