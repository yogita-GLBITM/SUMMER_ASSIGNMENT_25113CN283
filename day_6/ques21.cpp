#include <iostream>
using namespace std;

int DecimalToBinary(int n) {
    int binary = 0;
    int place = 1;

    while (n > 0) {
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    return binary;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    cout << "Binary number = " << DecimalToBinary(n);

    return 0;
}