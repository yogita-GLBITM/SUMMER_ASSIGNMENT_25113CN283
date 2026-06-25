#include <iostream>
using namespace std;

int main()
{
    int id[10], qty[10];
    string name[10];
    int n = 0, choice, searchId;

    do
    {
    cout << "\n--- Inventory Management System ---";
    cout << "\n1. Add Product";
    cout << "\n2. Display Products";
    cout << "\n3. Search Product";
    cout << "\n4. Exit";
    cout << "\nEnter Choice: ";
    cin >> choice;

        switch(choice)
        {
            case 1:
cout << "Enter Product ID: ";
cin >> id[n];

cout << "Enter Product Name: ";
cin >> name[n];

cout << "Enter Quantity: ";
cin >> qty[n];

n++;
break;

            case 2:
cout << "\nID\tName\tQuantity\n";

for(int i = 0; i < n; i++)
{
    cout << id[i] << "\t"
            << name[i] << "\t"
            << qty[i] << endl;
}
break;

            case 3:
cout << "Enter Product ID to Search: ";
cin >> searchId;
for(int i = 0; i < n; i++){

    if(id[i] == searchId)
    {
        cout << "Product Found\n";
        cout << "Name: " << name[i] << endl;
        cout << "Quantity: " << qty[i] << endl;
    }
}
break;

            case 4:
cout << "Thank You!";
break;
default:
cout << "Invalid Choice";
        }
    } while(choice != 4);

    return 0;
}