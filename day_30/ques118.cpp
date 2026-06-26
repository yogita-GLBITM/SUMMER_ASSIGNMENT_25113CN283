#include<iostream>
#include<string>
using namespace std;

string books[100];
int totalbooks=0;


void addbook(){//add new book
    string bookname;
    cout<<"enter the name of book you want: ";
    cin.ignore();
    getline(cin,bookname);

    books[totalbooks]=bookname;
    totalbooks++;

    cout<<"books added succesfullyy!1\n";

}


void displaybooks(){
    string bookname;
    bool found=false;
    cout<<"enter the name of book you want to search: ";
    cin.ignore();
    getline(cin,bookname);

    for(int i=0;i<totalbooks;i++){
        if(books[i]==bookname){
            cout<<"book found!\n";
            found=true;
            break;
        }
    }

    if(!found){
        cout<<"book not found.\n";
    }
}

void deletebook(){
    string bookName;
    bool found = false;
     cout << "Enter Book Name to Delete: ";
    cin.ignore();
    getline(cin, bookName);
for (int i = 0; i < totalbooks; i++)
    {
        if (books[i] == bookName)
        {
            for (int j = i; j < totalbooks - 1; j++)
            {
                books[j] = books[j + 1];
            }
            totalbooks--;
            found = true;

  cout << "Book Deleted Successfully!\n";
            break;
}
    }
    if(!found){
        cout<<"book not found.\n";
    }
}

int main(){
int choice;

do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addbook();
                break;

            case 2:
                displaybooks();
                break;

            case 3:
                deletebook();
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}



