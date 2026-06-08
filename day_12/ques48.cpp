#include<iostream>
using namespace std;
int Fibbonaci(int n){
int a=0,b=1;
cout<<a<<" "<<b<<" ";
int c;
for(int i =3;i<=n;i++){
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
}
}
int main(){
    int n;
    cout<<"Enter the numbeer of terms: ";
    cin>>n;
    Fibbonaci(n);
    return 0;
}




