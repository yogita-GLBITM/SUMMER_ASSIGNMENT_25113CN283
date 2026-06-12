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

// Function to find missing number
int FindMissing(int arr[], int n)
{
    int totalSum = (n + 1) * (n + 2) / 2;
    int arraySum = 0;

    for(int i = 0; i < n; i++)
    {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main()
{
    int n;

    cout << "Enter size of array ";
    cin >> n;

    int arr[n];

    ArrayInput(arr, n);

    int missing = FindMissing(arr, n);

    cout << "Missing Number = " << missing << endl;

    return 0;
}