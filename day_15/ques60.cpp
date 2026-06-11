#include<iostream>
using namespace std;

void inputArray(int arr[], int n){
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}//saving of array

void moveZeroes(int arr[], int n){
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }
    while(index<n){
        arr[index]=0;
        index++;
    }
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
    moveZeroes(arr, n);

    cout << "Array after moving zeroes: ";
    displayArray(arr, n);

    return 0;
}