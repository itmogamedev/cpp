#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

auto program = [](const vector<string>& v, char symb) {
    return count_if(v.begin(), v.end(), [symb](string line) {return line[0] == symb; });
};


int main() {
    vector<string> list = {"pen", "rubber", "pencil", "ruler", "case", "backpack", "notebook"};
    
    while (true){
        cout << "Введите символ " << endl;
        char x;
        cin >> x;
        int character = program(list, x);
        if (character == 1){
            cout << "По символу "  << x << " найдено " << character <<  " строка" << endl << endl;
        }
        else if(character > 1 and character < 5){
            cout << "По символу "  << x << " найдено " << character <<  " строки" << endl << endl;
        }
        else{
            cout << "По символу "  << x << " найдено " << character <<  " строк" << endl << endl;
        }
    }
}
