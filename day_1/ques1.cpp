// ques 1:Write a program to Calculate sum of first N natural numbers

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number\n";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<" "<<sum<<endl;
return 0;
}