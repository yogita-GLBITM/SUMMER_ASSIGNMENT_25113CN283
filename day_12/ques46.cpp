#include<iostream>
#include<math.h>
using namespace std;
int Armstrong(int n){
    int count=0,arm=0,digit;
    int original = n;
    int temp =n;
    while(n>0){
        n=n/10;
       count++;
    }
    while(temp>0){
digit=temp%10;
arm=arm+(int)pow(digit,count);
temp=temp/10;
    }
if(arm==original){
cout<<"number is armstrong";
}
else{
    cout<<"number is not armstrong";
}
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    Armstrong(n);
    return 0;
}