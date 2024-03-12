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
    vector<string> vec;
    char c;

    cout << "Введите букву для поиска: ";
    cin >> c;
    
    cin.ignore();

    cout << "Напишите ваш текст (для завершения напишите STOP):\n";
    string input_str;
    while (true) {
        getline(cin, input_str);
        if (input_str == "STOP") {
            break;
        }
        vec.push_back(input_str);
    }

    vector<string> filtered_strs = starts_with_c(vec, c);
    cout << "Строки начинающиеся с '" << c << "':" << endl;
    for (int i = 0; i < filtered_strs.size(); i++) {
        cout << filtered_strs[i] << endl;
    }

    return 0;
}
