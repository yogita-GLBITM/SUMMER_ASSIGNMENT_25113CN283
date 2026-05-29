#include<iostream>
using namespace std;

int ProductOfDigits(int n){
    int digit, product = 1;

    while(n > 0){
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    return product;
}

int main(){
    int n;

    cout << "Enter a number : ";
    cin >> n;

    cout << "Product of digits = " << ProductOfDigits(n);

    return 0;
}