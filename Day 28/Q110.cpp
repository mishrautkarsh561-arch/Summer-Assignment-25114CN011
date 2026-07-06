#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int accountNo;
    float balance = 0,amount;
    int choice;

    cout <<"========= BANK ACCOUNT MANAGEMENT SYSTEM ===========\n";

    cout <<"Enter Account Holder Name: ";
    getline (cin,name);

    cout <<"Enter Account Number: ";
    cin >> accountNo;
    do
    {
        cout <<"\n======= MENU =========\n";
        cout <<"1.Deposit Money\n";
        cout <<"2.Withdraw Money\n";
        cout << "3.check Balance\n";
        cout <<"4.Display Account Details\n";
        cout <<"5. Exit\n";
        cout <<"Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout <<"Enter Deposit Amount: ";
            cin >> amount;

            balance = balance + amount;
            cout <<"Amount Deposited Succesfully.\n ";
            break;
            case 2:
            cout <<"Enter Withdrawl Amount:  ";
            cin>> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Amount Withdrawn Succesfully.\n";

            }
            else{
                cout << "Insufficient Balnce!";
            }
            case 3:
             cout << "Current Balance:Rs " << balance << endl;
             break;
             case 4:
             cout <<"\n---------ACCOUNT DETAILS ----------\n";
             cout <<"Account Holder: "<<name << endl;
             cout << "Account Number : " << accountNo << endl;
             cout << "Balnce :Rs    "<< balance << endl;
             case 5:
              cout << "Thank You For Using the Bank Account System!\n ";
              break;
              default:
              cout << "Invalid Choice! Please Try Again.\n";



        }
    } while (choice  != 5);
    return 0; 
     

}