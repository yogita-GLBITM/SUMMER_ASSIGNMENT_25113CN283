#include<iostream>
using namespace std;

void inputArray(int arr[], int n) {
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Elements = " << even << endl;
    cout << "Odd Elements = " << odd;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    inputArray(arr, n);
    countEvenOdd(arr, n);

    return 0;
}