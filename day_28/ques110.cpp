#include<iostream>
using namespace std;
class bankaccount{
    private:
    string name;
    int accno;
    float balance;

    public:
    void createaccount(){
        cout<<"enter your name (ACCOUNT HOLDER)";
        cin.ignore();
        getline(cin,name);

        cout<<"enter account number:";
        cin>>accno;

        cout << "enter initial balance:";
        cin>>balance;

        cout<<"acct created succesfully!\n";
    }


    void deposit(){
        float amount;
         cout << "Enter Amount to Deposit: ";
        cin >> amount;
        balance=balance+amount;
        cout << "Amount Deposited Successfully!\n";

    }

void withdraw(){
    float amount;
    cout<<"enter amount to withdraw";
    cin>>amount;
    if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }
void displayAccount()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Holder : " << name << endl;
        cout << "Account Number : " << accno << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main(){

    bankaccount account;
    int choice;
do{
    cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

switch (choice)
        {
        case 1:
        account.createaccount();
        break;

        case 2:
        account.deposit();
        break;

        case 3:
        account.withdraw();
        break;

        case 4:
        account.displayAccount();
        break;

        case 5:
         cout << "Thank You for Using Bank System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);
    return 0;
}
