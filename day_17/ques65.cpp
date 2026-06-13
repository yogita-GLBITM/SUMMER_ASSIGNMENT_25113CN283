#include<iostream>
using namespace std;

void UnionArray(int arr1[],int arr2[],int n1,int n2){
    int arr3[n1+n2];
    int k=0;

    for(int i=0;i<n1;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(int i=0;i<n2;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(arr2[i]=arr3[j]){
                found=true;
                break;
            }
        }
        if(!found){
            arr3[k]=arr2[i];
            k++;
        }
    }
    cout << "Union of Arrays: ";
    for(int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
}
int main(){
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    UnionArray(arr1, arr2, n1, n2);
    return 0;
}