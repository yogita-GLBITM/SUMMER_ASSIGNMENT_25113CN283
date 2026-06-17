#include<iostream>
using namespace std;

void change(char str[]){
int length=0;
while(str[length]!='\0'){
    length++;
}
for(int i=0;i<length;i++){
     if (str[i] >= 'a' && str[i] <= 'z'){
    str[i]=str[i]-32;
}
}
cout<<str;
}
int main(){
    char str[100];
    cout<<"ENTER THE STRING :\n";
    cin.getline(str,100);
change(str);
    return 0;
}
