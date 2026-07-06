#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int choice;
    int totalSeats = 50;
    int bookedSeats = 0;
    int tickets;

    do
    {
        cout << "\n========= TICKET BOOKING SYSTEM==========\n";
        cout << "1.Book Ticket\n";
        cout << "2.Cancel Ticket\n";
        cout << "3. Check Availaible Seats\n";
        cout << "4. Display Booking Details\n";
        cout << "5.Exit\n";
        cout << "Enter your choice";
        cin >> choice;
        switch(choice)
        {
            case 1:
             cout <<"Enter Passenger Name: ";
             cin.ignore();
             getline(cin,name);

             cout <<"Enter Number of Tickets: ";
             cin >> tickets;

             if(bookedSeats + tickets <= totalSeats)
             {
                bookedSeats += tickets;

                cout <<"\n Ticket Booked Succesfully!\n";
                cout <<"Passenger Name: " << name << endl;
                cout <<"Tickets Booked : " << tickets << endl;
             }
             else
             {
                cout << "Sorry ! Not enough seats availaible.\n ";
             }
             break;
             case 2:
             cout <<"Enter Number of Tickets to Cancel";
             cin >> tickets;

             if(tickets <=  bookedSeats)
             {
                bookedSeats -= tickets;
                cout <<"Ticket Cancelled Succesfully!\n";

             }
             else
             {
                cout <<"Invalid Number of Tickets!\n";
             }
             break;
             case 3:

             cout << "Availaible Seats: "
                  << totalSeats - bookedSeats  << endl;
                  break;

             case 4:
              cout <<"\n-------BOOKING DETAILS----------\n";
              cout << "Passenger Name : " << name<< endl;
              cout <<"Booked Seats     :  "<<bookedSeats << endl;
              cout <<"Availaible Seats : "
                    <<totalSeats - bookedSeats << endl;
                    break;
             case 5:
              cout << "Thank You  for Using Ticket Booking System!\n";
              break;

                    default:
                    cout << "Invalid Choice! please Try  Again.\n";

        }

    }while(choice != 5);
    return 0;
}