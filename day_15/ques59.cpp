#include<iostream>
using namespace std;

void inputArray(int arr[], int n){
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void rightRotate(int arr[], int n){
    int last = arr[n - 1];

    for(int i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

void displayArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    inputArray(arr, n);
    rightRotate(arr, n);

    cout << "Array after right rotation: ";
    displayArray(arr, n);

    return 0;
}