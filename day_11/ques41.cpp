#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum;
    cout<<"ENTER 1ST NUMBER";
    cin>>a;
    cout<<"ENTER 2ND NUMBER";
    cin>>b;
    sum =a+b;
    cout<<sum;
    return 0;
}
int main(){
  int a,b;
  sum(a,b);
    return 0;
}