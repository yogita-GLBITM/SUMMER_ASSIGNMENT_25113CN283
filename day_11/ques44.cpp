#include<iostream>
using namespace std;
int fact(int n){
cout<<" ENTER THE NUMBER : ";
cin>>n;
int fact=1;
for(int i=1;i<=n;i++){
    fact*=i;
}
cout<<"FACTORIAL="<<fact;
return 0;
}
int main(){
    int n;
    fact(n);
    return 0;
}