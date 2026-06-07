#include<iostream>
using namespace std;
 bool IsPrime(int n){
    if(n <= 1){
        return false;
    }

 for(int i=2;i*i<n;i++){
    if(n%i==0){
        return false;
    }
}
    return true;
}
 int main(){
    int n ;
    cout<<" ENTER THE NUMBER : ";
    cin>>n;
    if(IsPrime(n)){
        cout<<" IT IS PRIME NUMBER ";
    }
    else{
        cout<<" IT IS NOT PRIME";
    }
    return 0;
 }