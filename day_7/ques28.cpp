#include <iostream>
using namespace std;

int reverseNum(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number = " << reverseNum(n, 0);

    return 0;
}