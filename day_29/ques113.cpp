
#include<iostream>
using namespace std;

float add(float a,float b){
    return a+b;
}

float sub(float a,float b){
    return a-b;
}

float multiply(float a,float b){
    return a*b;
}

float divide(float a,float b){
    if(b==0){
        cout<<"error!!";
    }
    return a/b;
}

int main(){
    int choice;

    float num1,num2;

    do{
cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice>=1 && choice<=4){
            cout<<"enter two numbers : \n";
            cin>>num1>>num2;

        }
switch(choice){
      case 1:
      cout << "result = "<<add(num1,num2)<<endl;
      break;


      case 2:
      cout << "result = "<<sub(num1,num2)<<endl;
      break;


      case 3:
      cout << "result = "<<multiply(num1,num2)<<endl;
      break;


      case 4:
      cout << "result = "<<divide(num1,num2)<<endl;
      break;


       case 5:
                cout << "Exiting Calculator..." << endl;
                break;

                default:
                cout << "Invalid Choice! Please try again." << endl;
}
        }while(choice!=5);

        return 0;
}
        
        
    
        

    