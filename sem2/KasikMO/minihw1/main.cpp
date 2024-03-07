#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v = {"Alice", "Ben", "Chloe", "Dan", "Debby", "Eve", "Farrel", "George", "Harry", "Harold", "Irene"};
    auto startwithCount = [v] (char _c){
        return count_if(v.begin(), v.end(), [_c] (string _s){ return _s[0] == _c; });
    }; //LAMBDA-EXPRESSION (itself) returns amount of strings so yes, lambda inside of lambda
    cout << startwithCount('A') << endl; // 1
    cout << startwithCount('D') << endl; // 2
    cout << startwithCount('Z') << endl; // 0

}
