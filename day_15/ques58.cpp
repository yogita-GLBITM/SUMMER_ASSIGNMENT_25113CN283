#include<iostream>
using namespace std;
int InputArray(int arr[],int n){
    cout<<"ENTER THE ELEMENTS OF ARRAY:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}
void leftRotate(int arr[],int n){
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}
void displayArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout<<"size of array :";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    leftRotate(arr,n);
    displayArray(arr,n);
    
}