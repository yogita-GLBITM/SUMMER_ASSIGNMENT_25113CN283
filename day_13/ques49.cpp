#include<iostream>
using namespace std;
void InputArray(int arr[],int n){
    cout<<"Enter Elements:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
void displayArray(int arr[],int n){
    cout<<" Array Elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int n;
    cout << "Enter size of array: ";
    cin >> n;
 int arr[n];
 InputArray(arr, n);
    displayArray(arr, n);

    return 0;
}

