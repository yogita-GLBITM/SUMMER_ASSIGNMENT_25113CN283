// QUES 3 factorial number;

#include<iostream>
using namespace std;
void Factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial of a number :\n"<< fact << endl;
}
int main(){
    int n;
    cout << "enter the number : \n";
    cin >> n;
    Factorial(n);
    return 0;
}