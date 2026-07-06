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
    Employee emp[100];
    int n = 0;
    int choice, searchId;
    bool found;

    do
    {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, emp[n].name);

                cout << "Enter Department: ";
                getline(cin, emp[n].department);

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "\nEmployee Added Successfully!";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo employee records found.";
                }
                else
                {
                    cout << "\n------ Employee Details ------";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee " << i + 1;
                        cout << "\nID         : " << emp[i].id;
                        cout << "\nName       : " << emp[i].name;
                        cout << "\nDepartment : " << emp[i].department;
                        cout << "\nSalary     : " << emp[i].salary;
                        cout << "\n---------------------------";
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    cout << "\nNo employee records available.";
                }
                else
                {
                    cout << "\nEnter Employee ID to Search: ";
                    cin >> searchId;

                    found = false;

                    for(int i = 0; i < n; i++)
                    {
                        if(emp[i].id == searchId)
                        {
                            cout << "\nEmployee Found!";
                            cout << "\nID         : " << emp[i].id;
                            cout << "\nName       : " << emp[i].name;
                            cout << "\nDepartment : " << emp[i].department;
                            cout << "\nSalary     : " << emp[i].salary;
                            found = true;
                            break;
                        }
                    }

                    if(!found)
                    {
                        cout << "\nEmployee not found.";
                    }
                }
                break;

            case 4:
                cout << "\nThank you for using Employee Management System!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
  
