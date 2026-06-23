#include <iostream>
using namespace std;
 
int main() {
    string name;
    int rollNo, n;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter Number of Subjects: ";
    cin >> n;
    int marks[n];   // array to store marks of each subject
    int total = 0;
 
    
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
 
        while (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Enter again (0-100): ";
            cin >> marks[i];
        }
 
        total += marks[i];
    }
 
    float percentage = (float)total / n;
 
   //grade allotment
    char grade;
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 60) grade = 'C';
    else if (percentage >= 40) grade = 'D';
    else grade = 'F';
 
    // Print Marksheet
    cout << "\n\n===== MARKSHEET =====\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;
    cout << "----------------------------\n";
 
    for (int i = 0; i < n; i++) {
        cout << "Subject " << i + 1 << "  : " << marks[i] << "/100" << endl;
    }
 
    cout << "----------------------------\n";
    cout << "Total      : " << total << "/" << n * 100 << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;
 
    if (grade == 'F')
        cout << "Result     : FAIL\n";
    else
        cout << "Result     : PASS\n";
 
    cout << "=============================\n";
 
    return 0;
}