#include<iostream>
using namespace std;
int SumOfDigit(int n){
int digit,sum=0;
digit=n%10;
sum=sum+digit;
n=n/10;