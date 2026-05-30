#include<iostream>
#include<math.h>
using namespace std;
int ArmstrongRange(int n){
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
    cout<<" "<<arm;
    return arm;
}
return 0;
    }

    int main(){
        int a,b,n,i;
cout<<"enter starting digit : \n";
cin>>a;
cout<<"enter ending digit : \n";
cin>>b;
for(int i=a;i<=b;i++){
    ArmstrongRange(i);
    }

return 0;
}
    