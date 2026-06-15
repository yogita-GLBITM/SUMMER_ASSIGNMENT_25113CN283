#include<iostream>
using namespace std;

void InputMatrix(int arr[][10], int row, int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void AddMatrix(int A[][10], int B[][10], int row, int column)
{
    int C[10][10];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"\nAddition Matrix:\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row,col;

    cout<<"Enter rows and columns: ";
    cin>>row>>col;

    int A[10][10], B[10][10];

    cout<<"Enter first matrix:\n";
    InputMatrix(A,row,col);

    cout<<"Enter second matrix:\n";
    InputMatrix(B,row,col);

    AddMatrix(A,B,row,col);

    return 0;
}