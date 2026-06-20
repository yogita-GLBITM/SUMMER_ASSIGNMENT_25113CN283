#include <iostream>
#include <string>
using namespace std;

// Function to check rotation
bool rotation(string str1, string str2) {
    if (str1.length() != str2.length())//unequal lenght
        return false;

    string temp = str1 + str1;//dupliacating the first string 
     //if str1=ABCD 
     //then temp=ABCDABCD
    //  ABCD  (original)possible rotaions are:
    //  BCDA
    //  CDAB
    //  DABC
    if (temp.find(str2) != string::npos)
        return true;

    return false;
}

int main() {
    string str1, str2;
//“Is str2 hidden inside this doubled string?
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (rotation(str1, str2))
        cout << "Strings are rotation of each other" << endl;
    else
        cout << "Not a rotation" << endl;

    return 0;
}