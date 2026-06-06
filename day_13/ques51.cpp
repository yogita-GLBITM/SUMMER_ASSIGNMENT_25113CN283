#include<iostream>
using namespace std;
void InputArray(int arr[],int n){
    cout<<"Enter Elements:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
int Largest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int smallest(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];


    InputArray(arr, n);

    cout << "Largest Element = " << Largest(arr, n) << endl;
    cout << "Smallest Element = " << smallest(arr, n);

    return 0;
}