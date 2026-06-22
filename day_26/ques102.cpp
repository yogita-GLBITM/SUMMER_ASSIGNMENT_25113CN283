#include<iostream>
using namespace std;
bool isEligible(int age){
if(age>=18){
    return true;
}
return false;
}
int main(){
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if(isEligible(age)){
        cout<<" you are eligible to vote."<<endl;
    }
    else{
        cout<<"you are not eligible to vote."<<endl;
    }
    return 0;
}