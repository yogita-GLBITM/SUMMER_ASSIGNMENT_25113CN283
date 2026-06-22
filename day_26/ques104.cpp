#include<iostream>
using namespace std;

int main()
{
    int score=0;
    int choice;
    cout<<"\nQuestion 1"<<endl;
    cout<<"What is the capital of India?"<<endl;
    cout<<"1. Mumbai"<<endl;
    cout<<"2. Delhi"<<endl;
    cout<<"3. Chennai"<<endl;
    cout<<"4. Kolkata"<<endl;
    cin>>choice;

    if(choice==2)
    {
        score++;
    }

    cout<<"\nQuestion 2"<<endl;
    cout<<"How many days are there in a week?"<<endl;
    cout<<"1. 5"<<endl;
    cout<<"2. 6"<<endl;
    cout<<"3. 7"<<endl;
    cout<<"4. 8"<<endl;
    cin>>choice;

    if(choice==3)
    {
        score++;
    }

    cout<<"\nQuestion 3"<<endl;
    cout<<"Which language is used for DSA?"<<endl;
    cout<<"1. C++"<<endl;
    cout<<"2. HTML"<<endl;
    cout<<"3. CSS"<<endl;
    cout<<"4. SQL"<<endl;
    cin>>choice;

    if(choice==1)
    {
        score++;
    }

    cout<<"\n===================="<<endl;
    cout<<"Your Score = "<<score<<"/3"<<endl;

    if(score>=2)
    {
        cout<<"Excellent"<<endl;
    }
    else if(score>=1)
    {
        cout<<"Good"<<endl;
    }
    else
    {
        cout<<"Try Again"<<endl;
    }

    return 0;
}