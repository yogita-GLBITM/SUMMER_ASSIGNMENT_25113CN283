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
int MaxFreq(int arr[],int n){
    
    int element;
     int MaxFreq=0;
    for(int i=0;i<n;i++){
        int count=1;
        
        for(int j=i+1;j<n;j++){

        if(arr[i]==arr[j]){
            count++;
        }
        }
        if(count>MaxFreq){
            MaxFreq=count;
             element = arr[i];
        }
    }
     cout << "Maximum Frequency Element = " << element << endl;
    cout << "Frequency = " << MaxFreq << endl;
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    ArrayInput(arr, n);

    MaxFreq(arr, n);

    return 0;
}
