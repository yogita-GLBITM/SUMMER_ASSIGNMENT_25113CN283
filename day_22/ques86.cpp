#include<iostream>
#include<string.h>
using namespace std;
int countwords(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"THE NUMBER OF WORDS IN THE SENETNCE ARE :"<<count+1<<endl;
    return 0;
}
int main(){
    cout<<"ENETR THE STRING:";
    string str;
    getline(cin,str);//to use predfined string thimgs you hve to use string not char
    countwords(str);
    return 0;

}