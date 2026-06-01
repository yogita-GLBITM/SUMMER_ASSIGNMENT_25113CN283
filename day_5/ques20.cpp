#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largestPrimeFactor = 1;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            largestPrimeFactor = i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}