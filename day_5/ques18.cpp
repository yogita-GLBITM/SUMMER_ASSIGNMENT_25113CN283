#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
void StrongNumber(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;

        sum = sum + factorial(digit);

        n = n / 10;
    }

    if (sum == original) {
        cout << "Strong Number";
    }
    else {
        cout << "Not Strong Number";
    }
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    StrongNumber(n);

    return 0;
}