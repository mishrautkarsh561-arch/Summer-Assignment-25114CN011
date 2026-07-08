#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id; 
    string name;
     string department;
     float salary;

};
int main()
{
    Employee emp[10];
    int count = 0;
    int choice, searchId;
    do
    {
        cout <<"\n===== Employee Management System ========";
        cout <<"1.Add Employee\n";
        cout <<"2.Display Employees\n";
        cout <<"3.Search Employee\n";
        cout <<"4.Exit\n";
        cout <<"Enter your choice: ";
        cin >>choice;

        switch(choice)
        {
            case 1:
             if(count < 10)
             {
                cout <<"Enter Employee ID: ";
                cin >> emp[count].id;

                cout <<"Enter Name: ";
                cin >> emp[count].name;
                
                cout <<"Enter Department: ";
                cin >> emp[count].department;

                cout <<"Enter Salary: ";
                cin  >> emp[count].salary;

                count++;
                cout <<"Employee Added Succesfully!\n";
             }
             else
             {
                cout <<"Employee List Full!\n";
             }
             break;
             case 2:
             if(count == 0)
             {
                cout <<"No Employee Records Found!\n";

             }
             else
             {
                cout <<"\nEmployee Records\n ";
                for(int i = 0; i< count ;i++)
                {
                    cout <<"\nEmployee " << i+1 << endl;
                    cout <<"ID: " << emp[i].id << endl;
                    cout <<"Name: " << emp[i].name << endl;
                    cout <<"Department: " << emp[i].id << endl;
                    cout <<"Salary: " <<emp[i].salary << endl;

                }
            }
                    break;
            case 3:
             {
                cout <<"Enter Employee ID to Search: ";
                cin >> searchId;

                bool found = false;
                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        cout <<"\nEmployee Found\n";
                        cout <<"ID:  "<< emp[i].id << endl;
                        cout <<"Name: " << emp[i].name << endl;
                        cout <<"Department: " << emp[i].department << endl;
                        cout <<"Salary:  " << emp[i].salary << endl;

                        found = true;
                        break;


                    }
                }
                if(!found)
                {
                    cout <<"Employee Not Found!\n";
                }
                break;
             }
             case 4:
               cout <<"Thank You!\n";
               break;

               default:
                  cout <<"Invalid Choice!\n";
            }
        }
        while(choice !=  4 );
        
        return 0;
             
    

}