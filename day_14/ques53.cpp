#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at position "<<i+1;

        }
        }
    cout << "Element not found"; 
}
    int main(){
int n,key;
cout<<"ENTER THE SIZE OF ARRAY:";
cin>>n;
int arr[n];
cout<<"ENTER THE ELEMENTS OF ARRAY:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"ENTER THE ELEMENT TO SEARCH:";
cin>>key;
linearSearch(arr,n,key);
return 0;
    }
