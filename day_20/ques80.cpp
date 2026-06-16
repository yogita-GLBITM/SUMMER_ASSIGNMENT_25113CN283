#include <iostream>//assuming it be nonsymmertric matrix
using namespace std;

int main(){
    int row,col;
    cout<<"enter row and column";
    cin>>row>>col;
    int a[100][100];

    cout<<"ENETR THE MATRIX ELEMENTS";
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"THE COLUMN WISE SUM OF FOLLOWING MATRIX IS:\n ";
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum+=a[i][j];
        }
        cout<<"THE SUM OF FOLLOWING "<< j+1 <<" COLUMN"<<"IS = "<<sum;
        cout<<"\n";
    }
    return 0;
    }
