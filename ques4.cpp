// / question 4 count no of digits;

#include<iostream>
using namespace std;
 void DigitCount(int n){
    int count=0;
    while(n>0){
    n=n/10;
    count++;
}
cout << "The Number Of Digits are : \n" << count << endl;
}
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;
    DigitCount(n);
    return 0;

}