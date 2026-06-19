#include <iostream>
#include <string>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    for (int i = 0; i < s1.length(); i++)
    {
        int count1 = 0, count2 = 0;

        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[i] == s1[j])
                count1++;

            if (s1[i] == s2[j])
                count2++;
        }

        if (count1 != count2)
            return false;
    }

    return true;
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (checkAnagram(str1, str2))
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}
// Anagrams are two strings (or words) that contain the same characters with the same frequency, but the characters can be arranged in a different order.