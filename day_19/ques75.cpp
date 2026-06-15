#include<iostream>
using namespace std;

void InputMatrix(int arr[][10], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void TransposeMatrix(int arr[][10], int row, int col)
{
    cout << "\nTranspose Matrix:\n";

    for(int j = 0; j < col; j++)
    {
        for(int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter rows and columns: ";
    cin >> row >> col;

    int arr[10][10];

    cout << "Enter matrix elements:\n";
    InputMatrix(arr, row, col);

    TransposeMatrix(arr, row, col);

    return 0;
}