#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, str2, temp;
    int choice;

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Concatenate String\n";
        cout << "6. Compare Strings\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
case 1:
cout << "Enter a string: ";
getline(cin, str);
break;

case 2:
cout << "String: " << str << endl;
break;

 case 3:
cout << "Length = " << str.length() << endl;
break;

case 4:
temp = str;
reverse(temp.begin(), temp.end());
cout << "Reversed String: " << temp << endl;
break;

case 5:
 cout << "Enter another string: ";
getline(cin, str2);
cout << "Concatenated String: " << str + str2 << endl;
                break;

case 6:
cout << "Enter another string: ";
getline(cin, str2);

if (str == str2)
    cout << "Strings are equal.\n";
else
    cout << "Strings are not equal.\n";
break;

case 7:
cout << "Exiting program...\n";
break;
default:
cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}