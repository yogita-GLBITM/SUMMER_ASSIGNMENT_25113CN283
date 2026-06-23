#include <iostream>
#include <vector>
using namespace std;
 struct Salary {
    int empId;
    string name;
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};
 
vector<Salary> salaries;
float calculateNetSalary(float basic, float allowance, float deduction) {
    return basic + allowance - deduction;
}

void addSalary() {
    Salary s;
    cout << "\nEnter Employee ID: ";
    cin >> s.empId;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Basic Salary: ";
    cin >> s.basicSalary;
    cout << "Enter Allowance: ";
    cin >> s.allowance;
    cout << "Enter Deduction: ";
    cin >> s.deduction;

    s.netSalary = calculateNetSalary(s.basicSalary, s.allowance, s.deduction);
 
    salaries.push_back(s);
    cout << "Salary record added successfully!\n";
    cout << "Net Salary: " << s.netSalary << endl;
}

void displayAll() {
    if (salaries.empty()) {
        cout << "\nNo salary records found.\n";
        return;
    }
    cout << "\n----- All Salary Records -----\n";
    for (int i = 0; i < salaries.size(); i++) {
        cout << "ID: " << salaries[i].empId
             << " | Name: " << salaries[i].name
             << " | Basic: " << salaries[i].basicSalary
             << " | Allowance: " << salaries[i].allowance
             << " | Deduction: " << salaries[i].deduction
             << " | Net Salary: " << salaries[i].netSalary << endl;
    }
}
 
void searchSalary() {
    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;
    for (int i = 0; i < salaries.size(); i++) {
        if (salaries[i].empId == id) {
            cout << "Record Found!\n";
            cout << "Name: " << salaries[i].name << endl;
            cout << "Basic Salary: " << salaries[i].basicSalary << endl;
            cout << "Allowance: " << salaries[i].allowance << endl;
            cout << "Deduction: " << salaries[i].deduction << endl;
            cout << "Net Salary: " << salaries[i].netSalary << endl;
            return;
        }
    }
    cout << "Record not found.\n";
}
 

void updateSalary() {
    int id;
    cout << "\nEnter Employee ID to update: ";
    cin >> id;
    for (int i = 0; i < salaries.size(); i++) {
        if (salaries[i].empId == id) {
            cout << "Enter new Basic Salary: ";
            cin >> salaries[i].basicSalary;
            cout << "Enter new Allowance: ";
            cin >> salaries[i].allowance;
            cout << "Enter new Deduction: ";
            cin >> salaries[i].deduction;
 
            salaries[i].netSalary = calculateNetSalary(
                salaries[i].basicSalary,
                salaries[i].allowance,
                salaries[i].deduction
            );
 
            cout << "Record updated successfully!\n";
            cout << "New Net Salary: " << salaries[i].netSalary << endl;
            return;
        }
    }
    cout << "Record not found.\n";
}
 
void deleteSalary() {
    int id;
    cout << "\nEnter Employee ID to delete: ";
    cin >> id;
    for (int i = 0; i < salaries.size(); i++) {
        if (salaries[i].empId == id) {
            salaries.erase(salaries.begin() + i);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Record not found.\n";
}


int main() {
    int choice;
 
    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Record\n";
        cout << "4. Update Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
 
        switch (choice) {
            case 1: addSalary(); break;
            case 2: displayAll(); break;
            case 3: searchSalary(); break;
            case 4: updateSalary(); break;
            case 5: deleteSalary(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);
 
    return 0;
}
 




