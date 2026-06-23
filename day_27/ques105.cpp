#include<iostream>
#include<vector>//
using namespace std;

struct Student{//making of strurcture
    int rollNo;
    
    string name;
    int age;
    float marks;
};
vector<Student> students;
void addStudents(){
    Student s;//str call
    cout<<"\n enter your roll no : ";
    cin>>s.rollNo;
    cin.ignore();

    cout<<"Enter name:\n ";//string call
    getline(cin,s.name);
 
    cout<<"Enter marks:\n ";
    cin>>s.marks;

    cout<<"enter yout age:\n ";
    cin>>s.age;

    students.push_back(s);//saving values
    cout<<" \n details saved succesfully!! \n";

}

void displayStudents(){//function to display all this details
    if(students.empty()){
        cout<<"NO DETAILS FOUND !!\n";
        return;

    }
    cout<<"\n THE FOLLOWING DETAILS OF THE STUDENTS IS :\n";
    for(int i=0;i<students.size();i++){
        cout<< "roll no : "<<students[i].rollNo;
        cout<<"name: "<<students[i].name;
        cout<<"age : "<<students[i].age;
        cout<<"marks: "<<students[i].marks;
    }
}

void searchdetails(){
    int roll;
    cout<<" ENETR ROLL NO TO SEARCH: ";
    cin>>roll;
    cout<<"\n THE FOLLOWING DETAILS OF THE STUDENTS IS :\n";
    for(int i=0;i<students.size();i++){
         if(students[i].rollNo == roll) {
        cout<< "roll no : "<<students[i].rollNo;
        cout<<"name: "<<students[i].name;
        cout<<"age : "<<students[i].age;
        cout<<"marks: "<<students[i].marks;
        return;
    }
}
 cout<<"student details not found.\n";   
}


void update(){
    int roll;
cout<<" ENETR ROLL NO TO SEARCH: ";
    cin>>roll;
    for(int i=0;i<students.size();i++){
         if(students[i].rollNo == roll) {
            cout<<"enter new name:\n";
            cin.ignore();
            getline(cin,students[i].name);
            cout<<"new age";
            cin>>students[i].age;
            cout<<"enter new/updated marks";
            cin>>students[i].marks;
            cout<<"RECOD UPDATED SUCCESSFULLY\n";
            return ;
         }
        }
        cout<<"record not found\n";
    }

    void deletedetails(){
        int roll;
        cout<<" ENETR ROLL NO TO SEARCH: ";
    cin>>roll;
    for(int i=0;i<students.size();i++){
         if(students[i].rollNo == roll) {
            students.erase(students.begin()+i);
                cout<<"record deleted successfully!!\n";
                return;
            }
    }
    cout<<"student not found.\n";
}

int main(){
    int choice;

    do{
        cout<< " enetr 1 to add student\n";
cout<<"enter 2 to display data of student\n";
cout<<"enter 3 to search student \n";
cout<<"enter 4 to update data of student\n";
cout<<"enter 5 to delete data of student\n";
   cout<<"enter 6 to exit \n";    
   cout<<"enter your choice:\n";
   cin>>choice;
    
    
    switch(choice){
        case 1: addStudents();
        break;
    case 2: displayStudents();
    break;
    case 3: searchdetails();
    break;
    case 4:update();
    break;
    case 5:deletedetails();
    break;
case 6:cout<<"EXITING PROGRAM....\n";
break;
}
    }while(choice!=6);
    return 0;
}




