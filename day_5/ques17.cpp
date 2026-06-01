#include<iostream>
using namespace std;
bool isPerfectnum(int n){
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    return(sum==n);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
   if(isPerfectnum(n))
   cout<<"perfect number ";
   else
   cout<<"not a perfect number";
   return 0;
}