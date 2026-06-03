#include<iostream>
using namespace std;
int fibonaaci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonaaci(n-1)+fibonaaci(n-2);
}
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
cout << "Fibonacci Series: ";
for(int i=0;i<n;i++){
    cout<<fibonaaci(i)<<" ";
}
return 0;
}