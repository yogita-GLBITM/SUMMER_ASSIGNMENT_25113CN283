#include <iostream>
#include <string>
using namespace std;

string names[100];
string phones[100];
int totalContacts = 0;

void addContact()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, names[totalContacts]);

    cout << "Enter Phone Number: ";
    getline(cin, phones[totalContacts]);

    totalContacts++;

    cout << "Contact Added Successfully!\n";
}

void displayContacts()
{
    if (totalContacts == 0)
    {
        cout << "No Contacts Available.\n";
        return;
    }

    cout << "\n----- Contact List -----\n";

    for (int i = 0; i < totalContacts; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name : " << names[i] << endl;
        cout << "Phone: " << phones[i] << endl;
    }
}

void searchContact()
{
    string searchName;
    bool found = false;

    cout << "Enter Name to Search: ";
    cin.ignore();
    getline(cin, searchName);

    for (int i = 0; i < totalContacts; i++)
    {
        if (names[i] == searchName)
        {
            cout << "\nContact Found!\n";
            cout << "Name : " << names[i] << endl;
            cout << "Phone: " << phones[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Contact Not Found.\n";
    }
}

void deleteContact()
{
    string deleteName;
    bool found = false;

    cout << "Enter Name to Delete: ";
    cin.ignore();
    getline(cin, deleteName);

    for (int i = 0; i < totalContacts; i++)
    {
        if (names[i] == deleteName)
        {
            for (int j = i; j < totalContacts - 1; j++)
            {
                names[j] = names[j + 1];
                phones[j] = phones[j + 1];
            }

            totalContacts--;
            found = true;

            cout << "Contact Deleted Successfully!\n";
            break;
        }
    }

    if (!found)
    {
        cout << "Contact Not Found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            displayContacts();
            break;

        case 3:
            searchContact();
            break;

        case 4:
            deleteContact();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}