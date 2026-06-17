#include<iostream>
using namespace std;

void reversestr(char str[]){
    int length=0;
    while(str[length]!=0){
        length++;
    }
    int strt=0;
    int end=length-1;
    for(int i=end;i>=strt;i--){
        cout<<str[i];

    }
//     while (start < end)
//     {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;

//         start++;
//         end--;
//     } alternate method 

}

int main(){
    char str[100];
    cout<<"ENTER THE STRING :\n";
    cin.getline(str,100);

    reversestr(str);
    return 0;
}