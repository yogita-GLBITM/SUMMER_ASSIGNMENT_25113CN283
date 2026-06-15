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

void SubtractMatrix(int A[][10], int B[][10], int row, int col)
{
    int C[10][10];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "\nSubtraction Matrix:\n";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter rows and columns: ";
    cin >> row >> col;

    int A[10][10], B[10][10];

    cout << "Enter first matrix:\n";
    InputMatrix(A, row, col);

    cout << "Enter second matrix:\n";
    InputMatrix(B, row, col);

    SubtractMatrix(A, B, row, col);

    return 0;
}