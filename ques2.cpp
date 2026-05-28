//question 2 Write a program to Print multiplication table of
// a given number.

#include<iostream>
using namespace std;
int MultiplicationTable(int n){
for(int i=0;i<=10;i++){
    cout << n << " x " << i << " = " << n*i << endl;
}
return 0;
}
int main(){
    int n,i;
    cout<<"Enter the number\n";
    cin>>n;
    cout<< "THE TABLE OF N IS : " << endl;
    MultiplicationTable(n);
    return 0;
}