#include<iostream>
using namespace std;

int frequency(int arr[], int n, int key) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element: ";
    cin >> key;

    cout << "Frequency = " << frequency(arr, n, key);

    return 0;
}