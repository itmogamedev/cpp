#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    vector <string> str = { "Aaaaaa", "Bbbbbb", "Gouegfow", "Obhoefi", "qegwweg", "qegw", "Ahoe" };
    char simb;
    cout << "Введите символ для поиска:" << endl;
    cin >> simb;
    int answer;
    answer = count_if(str.begin(), str.end(), [simb](string _str) {
        return (_str[0] == simb);
        });
    cout << answer;
}

