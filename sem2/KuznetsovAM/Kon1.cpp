#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vc = {"ni", "ko", "nn"};

    auto f = [&vc](char x)
        {
            int c = 0;
            for (std::string word : vc) {
                if (word[0] == x) { c++; }
            }
            return c;
        };
    cout << f('n');

}
