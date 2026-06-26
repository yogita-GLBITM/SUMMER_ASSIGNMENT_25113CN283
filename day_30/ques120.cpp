#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const int MAX=100;

int rollNo[100];
string name[100];
int presentDays[100];
int totalDays[100];

int studentcount=0;

void addstudent(){
    cout<<"\n ENTER ROLL NUMBER: ";
    cin>>rollNo[studentcount];
    cin.ignore();

    cout<<"ENTER STUDENT NAME: ";
    getline(cin,name[studentcount]);

    presentDays[studentcount]=0;
    totalDays[studentcount]=0;
    studentcount++;

    cout<<"student addded succesfully to the record!!\n";

}

void markattendence(){
    if(studentcount==0){
        cout<<"NO STUDENT AVAILABLE\n !!";
        return;
    }

    for (int i = 0; i < studentcount; i++)
    {
        char status;

        cout << "\nRoll No: " << rollNo[i]
             << " | Name: " << name[i];

        cout << "\nPresent (P) or Absent (A): ";
        cin >> status;

        totalDays[i]++;

        if (status == 'P' || status == 'p')
        {
            presentDays[i]++;
        }
    }

    cout << "\nAttendance Marked Successfully!\n";
}

void displaystudent(){
    if(studentcount==0){
        cout<<"no record available!!";
        return;
    }
 cout << "\n========== STUDENT RECORDS ==========\n";

 for(int i = 0; i < studentcount; i++)
    {
        float percentage=0;
        if(totalDays[i]>0){
            percentage=(float)presentDays[i]/totalDays[i]*100;
        }
        cout << "\nRoll No : " << rollNo[i];
        cout << "\nName    : " << name[i];
        cout << "\nPresent : " << presentDays[i];
        cout << "\nTotal   : " << totalDays[i];
        cout << "\nAttendance % : " << percentage << "%";
        cout << "\n-------\n";

}
}

void searchstudent(){
    int roll;
    bool found=false;
     cout << "\nEnter Roll Number to Search: ";
    cin >> roll;
    for(int i = 0; i < studentcount; i++)
    {
        if(rollNo[i]==roll){
        float percentage = 0;
         if (totalDays[i] > 0)
    {
    percentage =
        (float)presentDays[i] / totalDays[i] * 100;
    }
    cout << "\nStudent Found!";
    cout << "\nName: " << name[i];
    cout << "\nAttendance: " << percentage << "%";

    found = true;
    break;

        }
}

if (!found)
    {
        cout << "Student Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== ATTENDANCE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Mark Attendance";
        cout << "\n3. Display All Records";
        cout << "\n4. Search Student";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

switch(choice){
    case 1:
    addstudent();
    break;

    case 2:
    markattendence();
    break;

    case 3:
    displaystudent();
    break;

    case 4:
    searchstudent();
    break;

    case 5:
            cout << "\nThank You!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    }while(choice!=5);


    return 0;

}

