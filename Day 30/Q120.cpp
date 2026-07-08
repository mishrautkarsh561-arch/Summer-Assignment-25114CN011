#include  <iostream>
#include <string>
using namespace std;

const int MAX =100;

int roll[MAX];
string name[MAX];
int marks[MAX];
int totalStudents = 0;

void addStudent()
{
    if(totalStudents == MAX)
    {
        cout <<"\nRecord is Full!\n";
        return;
    }
    cout <<"\nEnter Roll Number: ";
    cin >> roll[totalStudents];
    cin.ignore();

cout <<"Enter Name:  ";
getline(cin,name[totalStudents]);
cin.ignore();

cout <<"Enter Marks: ";
cin >> marks[totalStudents];

totalStudents++;

cout <<"\nStudent Added Succesfully\n";
}
void displayStudents()
{
    if(totalStudents  == 0)
    {
        cout <<"\nNo Records Found!\n";
        return;
    }
    cout <<"\n-----------------------------\n";
    cout <<"Roll\tName\t\tMarks\n";
    cout <<"-----------------------------\n";
    for(int i = 0;i<totalStudents;i++)
    {
        cout  << roll[i] << "\t" << name[i] << "\t\t" << marks[i] << endl;
    }
}
void searchStudent()
{
    int r;
    cout <<"\nEnter Roll Number to Search: ";
    cin >> r;

    for(int i = 0;i< totalStudents;i++)
    {
      if(roll[i]==r)
      {
        cout <<"\nStudent Found!\n";
        cout <<"Roll : " << roll[i] << endl;
        cout <<"Name : " << name[i] << endl;
        cout <<"Marks: " << marks[i] << endl;
        return;
      }
    }
    cout <<"\nStudent Not Found!\n";

}
void updateStudent()
{
    int r;
    cout <<"\nEnter Roll Number to Update: ";
    cin >> r;

    for(int i = 0;i<totalStudents;i++)
    {
        if(roll[i] == r)
        {
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin,name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout <<"\nRecord Updated Succesfully!\n";
            return;
        }
    }
    cout << "\nStudent Not Found!\n";

}
void deleteStudent()
{
    int r;
    cout <<"Enter Roll Number to Delete:  ";
    cin >> r;

    for(int i = 0;i < totalStudents;i++)
    {
        if(roll[i] == r)
        {
            for(int j = i;j<totalStudents-1;j++)
            {
                roll[j] = roll[j+1];
                name[j] = name[j+1];
                marks[j] = marks[j+1];


            }
            totalStudents--;

            cout <<"\nRecord Deleted Successfully!\n";
            return;
        }
    }
    cout << "\nStudent Not Found!\n";

    }
    int main()
    {
        int choice;
        do
        {
            cout <<"\n=======================================";
            cout <<"\nSTUDENT RECORD MANAGEMENT SYSTEM";
            cout <<"\n=======================================";
            cout <<"\n1. Add Student";
            cout <<"\n2. Display Students";
            cout <<"\n3. Search Student ";
            cout <<"\n4. Update Student";
            cout <<"\n5. Delete Student";
            cout <<"\n6.Exit";
            cout <<"\n\nEnter Your Choice";
            cin >> choice;

            switch(choice)
            {
                case 1:
                  addStudent();
                  break;

                case 2:
                  displayStudents();
                  break;

                case 3:
                  searchStudent();
                  break;

                case 4:
                  updateStudent();
                  break;

                case 5:
                   deleteStudent();
                   break;

                case 6:
                  cout <<"\nThank You!\n";
                  break;

                  default:
                   cout <<"\nInvalid Choice!\n";

                   
            }
        }while(choice != 6);

        return 0;
    }
