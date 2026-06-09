#include<iostream>
using namespace std;
void InputArray(int arr[],int n){
    cout<<"Enter Elements:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
int findSum(int arr[],int n){
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
cout<<sum;
return sum;
}
int main() {
    int n;
    int arr[n];
    cout << "Enter size of array: ";
    cin >> n;
    int sum=findSum(arr,n);
    float avg=(float)sum/n;
    cout<<"sum="<<sum<<endl;
    cout<<"average="<<avg<<endl;
    return 0;
    }

