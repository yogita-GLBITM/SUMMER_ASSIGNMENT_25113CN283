#include<iostream>
using namespace std;
void commonCharacters(string s1, string s2) {
     for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j]) {
                cout << s1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;
    commonCharacters(s1, s2);

    return 0;
}