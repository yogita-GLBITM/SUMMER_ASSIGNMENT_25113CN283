#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


void printPrimeRange(int a, int b) {
    cout << "Prime numbers between " << a << " and " << b << " are:\n";

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;

    cout << "Enter starting number: ";
    cin >> a;

    cout << "Enter ending number: ";
    cin >> b;

    printPrimeRange(a, b);

    return 0;
}