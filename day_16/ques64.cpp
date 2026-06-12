#include<iostream>
using namespace std;

// Function to input array
void ArrayInput(int arr[], int n)
{
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void RemoveDuplicate(int arr[],int n){
    cout << "Array after removing duplicates: ";
 for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 0)
        {
            cout << arr[i] << " ";
        }
    }

}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    ArrayInput(arr, n);
    RemoveDuplicate(arr, n);

    return 0;
}