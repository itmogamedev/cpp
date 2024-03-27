
#include <iostream>

using namespace std;

int ch_naoborot(int n){
    int n1=0;
    while (n>0){
        n1=n1*10;
        n1=n1 + n%10;
        n=n/10;
        
    }
    return n1;
}

int main()
{
    int n=0;
    std::cin>>n;
    std::cout<<ch_naoborot(n)<<std::endl;
    return 0;
}
