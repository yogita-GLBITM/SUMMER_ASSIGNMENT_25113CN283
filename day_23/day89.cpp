#include<iostream>
#include<string.h>
using namespace std;
void repeating(string str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cout << "First repeating character: " << str[i];
               return;
            }
        }
    }
       cout << "No repeating character found";
}
int main(){
    cout<<"ENTER THE STRING:\n";
    string str;
    getline(cin,str);
repeating(str);
return 0;
}