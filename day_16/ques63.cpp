#include<iostream>
using namespace std;

// Function to input array elements
void ArrayInput(int arr[], int n)
{
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void pairsum(int arr[],int n,int sum){
bool found=false;
cout<<"ENTER THE SUM YOU WANT:";
cin>>sum;
for(int i=0;i<n;i++){
    for(int j=i+1;i<n;i++){
        if(arr[i]+arr[j]==sum){
            cout<<"PAIR FOUND:"<<arr[i]<<" and "<<arr[j]<<endl;
            found=true;
        }
    }
}
    if(found==false){
     cout << "No Pair Found" << endl;
    }
}

int main(){
     int n, sum;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    ArrayInput(arr, n);

    pairsum(arr, n, sum);

    return 0;
}
