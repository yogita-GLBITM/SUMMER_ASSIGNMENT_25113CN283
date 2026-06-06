#include<iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicate Elements are: ";

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findDuplicates(arr, n);

    return 0;
}