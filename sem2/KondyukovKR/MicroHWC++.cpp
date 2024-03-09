#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    cout << "Enter the string first, then the character: " << endl;

    string stroka_line;
    char bukva_char;

    getline(cin, stroka_line);
    cin >> bukva_char;

    stringstream ss(stroka_line);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    auto count_and_show_words = [bukva_char](const vector<string> &words) {
        vector<string> filtered_words; 
        for (const auto &word : words) {
            if (!word.empty() && word[0] == bukva_char) {
                filtered_words.push_back(word);
            }
        }
        return filtered_words; 
        };

    vector<string> filtered_words = count_and_show_words(words); 
    cout << "Number of words starting with letter '" << bukva_char << "': " << filtered_words.size() << endl;
    cout << "These are the words: ";
    for (const auto &fw : filtered_words) {
        cout << fw << " ";
    }
    cout << endl;

    return 0;
}
