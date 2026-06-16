#include <iostream>//assuming it be symmertric matrix
using namespace std;

int main() {
    int n;
    
    cout << "Enter order of square matrix: ";
    cin >> n;

    int a[100][100];

    cout << "Enter matrix elements:\n";//saving matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+a[i][j];
        }
     cout<<"sum of row  "<<i+1<<" = "<<sum<<endl;   
    }
    return 0;
}