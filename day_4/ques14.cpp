#include<iostream>
using namespace std;
int fibonaciterm(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a=0,b=1;
int c;
for(int i =2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
}
return b;
}
int main(){
    int n;
    cout<<"ENTER THE TERM YOU NEED: ";
    cin>>n;
  cout<<" Nth fibonacci term = "<<fibonaciterm(n);

    return 0;
}

