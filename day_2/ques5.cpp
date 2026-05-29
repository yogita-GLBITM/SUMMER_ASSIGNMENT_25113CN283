#include<iostream>
using namespace std;
int SumOfDigit(int n){
    int sum=0,digit;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
}
cout<<" "<<sum<<endl;
return sum;
}
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    SumOfDigit(n);
    return 0;
}