#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> vec;
    string input;
    char startChar;

    cout << "Enter strings for the vector, end with 'done':\n";
    while (cin >> input && input != "done") {
        vec.push_back(input);
    }

    cout << "Enter the character to count strings that start with it: ";
    cin >> startChar;

    auto count_start_char = [](const vector<string>& v, char c) -> int {
        int count = 0;
        for (const auto& s : v) {
            if (!s.empty() && s[0] == c) {
                ++count;
            }
        }
        return count;
        };

    int count = count_start_char(vec, startChar);
    cout << "Number of strings starting with '" << startChar << "': " << count << endl;

    return 0;
}
