#include <iostream>
#include <string>
using namespace std;
int Removespace(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i]  != ' '){
result+=str[i];
        }
        }
        cout<<" THE NEW STRING WITH REMOVED SPACES IS:\n"<<result;
    return 0;
}
int main(){
    cout<<"ENTER TH STRING:\n";
    string str;
    getline(cin,str);
Removespace(str);
return 0;
}