#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<string> v = { "apple", "banana", "avocado", "cherry", "apricot" };

    auto starts_with_count = [](const vector<string>& vec, char ch) {
        return count_if(vec.begin(), vec.end(), [ch](const string& s) {
            return !s.empty() && s[0] == ch;
            });
        };

    int count = starts_with_count(v, 'a');
    cout << "Number of strings starting with 'a': " << count << endl;

    return 0;
}

