#include<iostream>
using namespace std;

void InputMatrix(int arr[][10], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int DiagonalSum(int arr[][10], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter matrix elements:\n";
    InputMatrix(arr, n);

    cout << "Sum of Diagonal Elements = " << DiagonalSum(arr, n);

    return 0;
}