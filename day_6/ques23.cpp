#include<iostream>
using namespace std;
int CountSetOfBits(int n){
    int count=0;
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    cout<<" "<<count;
    return 0;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER:\n";
    cin>>n;
    CountSetOfBits(n);
    return 0;
}