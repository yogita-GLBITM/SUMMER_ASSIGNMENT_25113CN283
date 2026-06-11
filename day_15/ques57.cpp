#include<iostream>
using namespace std;
int ArrayDisplay(int arr[],int n){
    cout<<"ENTER THE ELEMENTS OF ARRAY:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}
int Reverse(int arr[],int n){
    int i;
    for(int i=n-1;i>=0;i--){
        cout<<"REVERSED ARRAY IS:"<<arr[i]<<" ";
    }
    return 0;
}
int main(){
cout<<"ENTER THE SIZE OF ARRAY:";
int n;
cin>>n;
int arr[n];
ArrayDisplay(arr,n);
Reverse(arr,n);
return 0;
}
// void reverseArray(int arr[], int start, int end){
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// } method 2 and effective approach