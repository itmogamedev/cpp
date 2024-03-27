#include <iostream>

using namespace std;

int fib(int n){
    int i=1; 
    int n1=0;
    int n2=1;
    int n3=0;
    
    while (i<=n) {
        if (i==1 and n>=1) {
            std::cout<<n1<<std::endl;
            i=i+1;

        }
        
        if (i==2 and n>=2){
            std::cout<<n2<<std::endl;
            i=i+1;

        }
        
        if (i>2 and n>2){
            n3=n1+n2;
            std::cout<<n3<<std::endl;
            n1=n2;
            n2=n3;
            i=i+1;

        }
    
    }

}

int main()
{
    
    int n=0;
    std::cout<<"Введите номер члена последовательности"<<std::endl;
    std::cin>>n;
    fib(n);
    
    return 0;
}