#include <iostream>
using namespace std;

// GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b) {
    int gcd = findGCD(a, b);

    int maxVal = (a > b) ? a : b;  

    return (a / gcd) * b; 
}
int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM = " << findLCM(a, b);

    return 0;
}