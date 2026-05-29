#include<iostream>
using namespace std;
int Reverse(int n){
int reverse=0,digit;
while(n>0){
digit=n%10;
reverse=reverse*10+digit;
n=n/10;
}
cout<<""<<reverse<<endl;
return reverse;
}
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    Reverse(n);
    return 0;
}

