#include<iostream>
#include<vector>
using namespace std;
struct employee{//making of strurcture
    int empID;
    
    string name;
    int age;
    float salary;
};
vector<employee> employees;
void addemployees(){
    employee s;//str call
    cout<<"\n enter your empID no : ";
    cin>>s.empID;
    cin.ignore();

    cout<<"Enter name:\n ";//string call
    getline(cin,s.name);
 
    cout<<"Enter salary:\n ";
    cin>>s.salary;

    cout<<"enter yout age:\n ";
    cin>>s.age;

    employees.push_back(s);//saving values
    cout<<" \n details saved succesfully!! \n";

}

void displayemployees(){//function to display all this details
    if(employees.empty()){
        cout<<"NO DETAILS FOUND !!\n";
        return;

    }
    cout<<"\n THE FOLLOWING DETAILS OF THE STUDENTS IS :\n";
    for(int i=0;i<employees.size();i++){
        cout<< "empID no : "<<employees[i].empID;
        cout<<"name: "<<employees[i].name;
        cout<<"age : "<<employees[i].age;
        cout<<"salary: "<<employees[i].salary;
    }
}

void searchdetails(){
    int empID;
    cout<<" ENETR ROLL NO TO SEARCH: ";
    cin>>empID;
    cout<<"\n THE FOLLOWING DETAILS OF THE STUDENTS IS :\n";
    for(int i=0;i<employees.size();i++){
         if(employees[i].empID == empID) {
        cout<< "empID no : "<<employees[i].empID;
        cout<<"name: "<<employees[i].name;
        cout<<"age : "<<employees[i].age;
        cout<<"salary: "<<employees[i].salary;
        return;
    }
}
 cout<<"employee details not found.\n";   
}


void update(){
    int empID;
cout<<" ENETR ROLL NO TO SEARCH: ";
    cin>>empID;
    for(int i=0;i<employees.size();i++){
         if(employees[i].empID == empID) {
            cout<<"enter new name:\n";
            cin.ignore();
            getline(cin,employees[i].name);
            cout<<"new age";
            cin>>employees[i].age;
            cout<<"enter new/updated salary";
            cin>>employees[i].salary;
            cout<<"RECOD UPDATED SUCCESSFULLY\n";
            return ;
         }
        }
        cout<<"record not found\n";
    }

    void deletedetails(){
        int empID;
        cout<<" ENETR ID OF EMPLOYEE NO TO SEARCH: ";
    cin>>empID;
    for(int i=0;i<employees.size();i++){
         if(employees[i].empID == empID) {
            employees.erase(employees.begin()+i);
                cout<<"record deleted successfully!!\n";
                return;
            }
    }
    cout<<"employee not found.\n";
}

int main(){
    int choice;

    do{
        cout<< " enetr 1 to add employee\n";
cout<<"enter 2 to display data of employee\n";
cout<<"enter 3 to search employee \n";
cout<<"enter 4 to update data of employee\n";
cout<<"enter 5 to delete data of employee\n";
   cout<<"enter 6 to exit \n";    
   cout<<"enter your choice:\n";
   cin>>choice;
    
    
    switch(choice){
        case 1: addemployees();
        break;
    case 2: displayemployees();
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




