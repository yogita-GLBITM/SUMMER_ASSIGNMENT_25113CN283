#include <iostream>
#include<cstdlib>//library for randoem and srand for random numberss
#include<ctime>//for current time
using namespace std;

void numberGuess(){
    srand(time(0));
    int secretnumber=rand()%100+1; //rand goes random number 
    int guess,attempts=0;
    cout<<"====NUMBER GUESSING GAME ====="<<endl;
    cout<<"\n";
    cout<<"GUESS A NUMBER BETWEEN 1 TO 100"<<endl;

    do{
        cout<<"ENETR THE NUMBER YOU GUESS: ";
        cin>>guess;
        attempts++;

        if(guess>secretnumber){
            cout<<"too high!try again."<<endl;
        }
        else if(guess<secretnumber){
            cout<<"too low!try again"<<endl;
        }
        else{
            cout<<"well tried ! its correct";
            cout<<"\n";
            cout<<"total attempt : "<<attempts <<endl;
        }
    }while(guess != secretnumber);//do while loop
    }
int main(){
numberGuess();
return 0;
}
