#include<iostream>
using namespace std;

int Palindrome(int n){
    int reverse = 0, digit, original;

    original = n;

    while(n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse){
        cout<<"it is palindrome";
    }
    else{
        cout<<"it is not palindrome";
    }
}

int main(){
    int n;

    cout << "Enter a number : ";
    cin >> n;

    Palindrome(n);

    return 0;
}