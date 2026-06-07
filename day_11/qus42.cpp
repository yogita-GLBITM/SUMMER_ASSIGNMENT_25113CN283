#include<iostream>
using namespace std;

int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Maximum number = " << maximum(x, y);

    return 0;
}