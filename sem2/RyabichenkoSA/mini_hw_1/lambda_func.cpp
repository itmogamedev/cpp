#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main(){
	std::vector<std::string> srcVec;
	std::string stroka;
	int n=0;
	char sym;
	
	std::cout << "Please enter number of string, and next enter strings"<<std::endl;
	std::cin >> n;

	
	for (int i=0; i<n; i++){ 
	    std::cin >> stroka;
	    srcVec.push_back(stroka);
	}
	
	std::cout << "Please enter first symbol"<<std::endl;
	std::cin >> sym;
	
    for (std::string x : srcVec) std::cout << x << " "; 
    std::cout<<std::endl;
        
    int result = count_if(srcVec.begin(), srcVec.end(), [sym] (std::string n) {
			return sym == n[0];
    });

    std::cout << result << std::endl;
}
