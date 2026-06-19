#include <iostream>
#include <string>
using namespace std;

char maxOccurringChar(string str)
{
    int maxCount = 0;
    char maxChar;
for(int i = 0; i < str.length(); i++)
    {
        int count = 0;
for(int j = 0; j < str.length(); j++)
        {
        if(str[i] == str[j])
                count++;
        }

        if(count > maxCount)
        {
        maxCount = count;
        maxChar = str[i];
        }
    }

    return maxChar;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Maximum occurring character is: "
         << maxOccurringChar(str);

    return 0;
}