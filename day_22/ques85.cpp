#include <iostream>
using namespace std;

bool isPalindrome(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int start = 0, end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    if (isPalindrome(str))
        cout << "Palindrome string";
    else
        cout << "Not a palindrome";

    return 0;
}