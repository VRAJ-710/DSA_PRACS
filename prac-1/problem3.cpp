#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a sentence:" << endl;
    getline(cin, s);

    string word = "", best = "";
    int maxLen = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            int len = word.length();
            if (len > maxLen) {
                maxLen = len;
                best = word;
            }
            word = "";
        } else {
            word = word + s[i];
        }
    }

    cout << "Longest word: " << best << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}
