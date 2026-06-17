#include<iostream>
using namespace std;

int findlength(char str[]){

    int count=0;
    while(str[count]!='\0'){

        count++;

    }
cout<<" THE NUMBER OF LETTER IN THE STRING IS : "<< count << endl;
return 0;
}
int main(){
    char str[100];
    cout<<"ENTER THE STRING :\n";
    cin.getline(str,100);

    int length=findlength(str);
    return 0;
}