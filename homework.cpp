#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> starts_with_c(const vector<string>& v, char c) {
    vector<string> res;
    for (int i = 0; i < v.size(); i++) {
        if (!v[i].empty() and v[i][0] == c) {
            res.push_back(v[i]);
        }
    }
    return res;
}

int main() {
    vector<string> vec = {"atttan", "asdhf", "ksd", "sdf", "avoc"};
    char c = 'a';

    vector<string> filtered_strs = starts_with_c(vec, c);
    cout << "Strings starting with '" << c << "':" << endl;
    for (int i = 0; i < filtered_strs.size(); i++) {
        cout << filtered_strs[i] << endl;
    }

    return 0;
}
