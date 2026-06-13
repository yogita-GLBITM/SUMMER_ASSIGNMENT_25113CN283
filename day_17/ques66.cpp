#include<iostream>
using namespace std;

void displayarray(int arr1[], int arr2[], int n)
{
    int i, j, k;

    cout << "Enter the elements in arr1: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }//stored 1st array

    cout << "Enter the elements in arr2: ";
    for(j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }//stored 2nd array


    int arr3[2*n];
    k=0;
    for(i=0;i<n;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(j = 0; j<n; j++)
    {
        arr3[k] = arr2[j];
        k++;
    }
    cout << "THE NEW MERGED ARRAY IS: ";
    for(k = 0; k < 2 * n; k++)
    {
        cout << arr3[k] << " ";
    }
}
int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr1[n], arr2[n];

    displayarray(arr1, arr2, n);

    return 0;
}
    