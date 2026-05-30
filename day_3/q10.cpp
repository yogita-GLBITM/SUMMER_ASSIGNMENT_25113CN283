#include<iostream>
using namespace std;
int Prime(int n){
    if(n <= 1){
        cout << "Not a prime number";
        return 0;
    }

for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"it is not a prime number";
        return 0;
    }
}
    cout << "It is a prime number";
    return 0;
}
int main(){
int n;
cout<<"Enter the number :\n";
cin>>n;
Prime(n);
return 0;
}
