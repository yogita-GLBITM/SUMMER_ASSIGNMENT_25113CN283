#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n===== ATM SIMULATOR =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your Balance is Rs. " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Amount deposited successfully!" << endl;
            cout << "Updated Balance = Rs. " << balance << endl;
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;

                cout << "Amount withdrawn successfully!" << endl;
                cout << "Remaining Balance = Rs. " << balance << endl;
            }
            else {
                cout << "Insufficient Balance!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank You for Using ATM!" << endl;
        }
        else {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}