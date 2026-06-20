#include <iostream>
#include <string>
using namespace std;

string RemoveDuplicate(string str) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool found = false;

        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing duplicates: "
         << RemoveDuplicate(str);

    return 0;
}