
#include <iostream>
using namespace std;

string findlongest(string str) {
    string word = "", largest = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i < str.length() && str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() > largest.length()) {
                largest = word;
            }
            word = "";
        }
    }

    return largest;
}

int main() {
    string str;
    getline(cin, str);

    cout << "Longest word: " << findlongest(str);

    return 0;
}