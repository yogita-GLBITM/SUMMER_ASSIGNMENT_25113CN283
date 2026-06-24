#include <iostream>
using namespace std;
int main(){
    int totalseats=50;
    int choice,tickets;
    float price=200.0;

    do{
         cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;


        switch(choice){
            case 1:
            cout<<"enter number of tickets:";
            cin>>tickets;
 if (tickets <= totalseats)
            {
                totalseats = totalseats - tickets;

                float bill = tickets * price;

                cout << "\nTicket Booked Successfully!\n";
                cout << "Tickets Booked : " << tickets << endl;
                cout << "Total Amount   : Rs. " << bill << endl;
                cout << "Seats Left     : " << totalseats << endl;
            }
            else
            {
                cout << "Sorry! Not Enough Seats Available.\n";
            }
            break;

        case 2:
            cout << "Available Seats: " << totalseats << endl;
            break;

        case 3:
            cout << "Thank You For Using Ticket Booking System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}
    