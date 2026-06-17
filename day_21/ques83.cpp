#include<iostream>
using namespace std;

void count(char str[]){
int consonat=0,vowel=0;
int length=0;
while(str[length]!='\0'){
    length++;
}
for(int i=0;i<length;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
   str[i]=='o' || str[i]=='u' ||
   str[i]=='A' || str[i]=='E' || str[i]=='I' ||
   str[i]=='O' || str[i]=='U'){
        vowel++;
    }
    else{
        consonat++;
    }
}
    cout<<"the number of vowel are : "<<vowel<<endl;
    cout<<"\n";
    cout<<"the number of consonat are :"<< consonat<<endl;
    
}

int main(){
    char str[100];
    cout<<"ENTER THE STRING :\n";
    cin.getline(str,100);
count(str);
    return 0;
}