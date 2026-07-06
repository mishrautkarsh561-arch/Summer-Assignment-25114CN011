#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
};

int main()
{
    Student s[100];
    int n = 0;
    int choice; 
    int roll;
    int i;
    bool found;

    do{
        cout << "\n------Student Record Management System --------\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";

        cout << "3. Search Student\n";
        cout << "Enter your choice: ";
        cin >> choice;
    
    switch (choice)
    {
        case 1:
             cout <<"Enter Roll Number: ";
             cin >> s[n].roll;

             cout << "Enter Name: ";;
             cin >> s[n].name;

             cout <<"Enter Marks: ";
             cin >> s[n].marks;

             n++;
             cout  << "Student record added succesfully.\n";
             break;
        case 2:
        if(n == 0)
        {
            cout << "No  records found.\n";
        }
        else
        {
            cout << "\nStudents Records:\n";
            for(i = 0; i< n;i++)
            {
                cout <<"Roll Number: "  << s[i].roll << endl;
                cout <<"Name:  " << s[i].name << endl;
                cout <<"Marks: "<< s[i].marks << endl;
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout << "Student not found.\n";
        }
        break;
        case 4:
         cout <<"Existing....\n";
         break;

         default:
         cout << "Invalid choice.\n";
    }

} while (choice != 4);
return 0;
}