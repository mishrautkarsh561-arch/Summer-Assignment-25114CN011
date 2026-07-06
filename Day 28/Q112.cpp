#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[100];
    string phone[100];
    int total = 0;
    int choice;
    string searchName;

    do{
        cout <<"\n==========CONTACT MANAGEMENT SYSTEM============\n";
        cout <<"1.Add contact\n";
        cout <<"2. Display Contacts\n";
        cout << "3.Search Contact\n";
        cout <<"4.Delete Last Contact\n";
        cout <<"5.Exit\n";
        cout <<"Enter Your Choice\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cin.ignore();

                cout <<"Enter contact Name";
                getline(cin,name[total]);

                cout <<"Enter Phone Number: ";
                getline(cin,phone[total]);

                total++;

                cout <<"Contact Added Succesfully!\n";
                break;

                case 2:
                    if(total == 0)  
                {
                    cout << "No Contacts Found.";

                }     
                else
                {
                    cout  <<"\n------CONTACT LIST-------\n";
                    for(int i = 0; i < total;i++)
                    {
                        cout <<"Contact " << i +1 << endl;
                        cout <<"Name    : " << name << endl;
                        cout <<"Phone   : "<< phone[i] << endl;
                        cout <<"-------------------\n";
                    }

                }
                break;
                case 3:
                 if(total ==  0)
                 {
                    cout <<"No Contacts Availaible.\n";
                    break;
                 }
                 cin.ignore();
                 cout <<"Enter Contact Name to Search: ";
                 getline(cin, searchName);
                 for (int i = 0; i< total; i++)
                 {
                    if(name[i] == searchName)
                    {
                        cout << "\nContact Found!\n";
                        cout <<"Name : " << name[i] << endl;
                        cout <<"Phone : " << phone[i] << endl;
                        break;
                    }
                  if  (i = total - 1)
                  {
                    cout <<"Contact Not Found.\n";
                  }
                 }
                 break;
                 case 4 :
                  if(total == 0)
                  {
                    cout <<"No Contact to Delete.\n";

                  }
                  else
                  {
                    total --;
                    cout <<"Last Contact Deleted Succesfully!\n";
                  }
                  break;
                  case 5:
                  cout <<"Thank You for Using Contact Management System!\n";
                  break;

                  default :
                    cout <<"Invalid Choice! Please Try Again.\n";

            }
    }while(choice != 5);
 return 0;
}