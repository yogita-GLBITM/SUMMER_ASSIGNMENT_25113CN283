#include <iostream>
using namespace std;

int BinaryToDecimal(int n) {
    int decimal = 0;
    int place = 1;

    while (n > 0) {
        int digit = n % 10;
        decimal = decimal + digit * place;
        place = place * 2;
        n = n / 10;
    }

    return decimal;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Decimal number = " << BinaryToDecimal(n);

    return 0;
}