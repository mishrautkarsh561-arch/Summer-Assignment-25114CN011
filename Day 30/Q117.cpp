#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int main()
{
    int roll[MAX] , marks[MAX];
    string name[MAX];
    int count = 0;
    int choice;

    do
    {
        cout <<"\n=====STUDENT RECORD SYSTEM =======";
        cout <<"\n1.Add Student";
        cout <<"\n2.Display Students";
        cout <<"\n3.Search Student";
        cout <<"\n4.Update Marks";
        cout <<"\n5.Delete Student";
        cout << "\n6.Exit";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(count == MAX)
                {
                    cout <<"Record is Full!\n";
                    break;
                }
                cout << "Enter Roll Number: ";          
                cin >> roll[count];

                cin.ignore();
                cout <<"Enter Name";
                getline(cin,name[count]);

                cout <<"Enter Marks: ";
                cin >> marks[count];
                count ++;

                cout <<"Student Added Succesfully!\n";
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout <<"\nRoll\tName\t\tMarks\n";
                    cout  <<"---------------------------\n";
                    for(int i = 0;i < count;i++)
                    {
                        cout << roll[i] << "\t"
                              <<  name[i] <<"\t\t"
                              << marks[i] << endl;
                    }
                }
                break;
            }
            case 3:
            {
                int r, found = 0;
                cout <<"Enter Roll Number to Search";
                cin >> r;

                for(int i = 0; i< count; i++)
                {
                    if(roll[i] =r)
                    {
                        cout << "\nStudent Found\n";
                        cout <<"Roll Number: "  << roll[i] << endl;
                        cout  <<"Name       : " << name[i] << endl;
                        cout <<"Marks        : " << marks[i] << endl;

                        found = 1;
                        break;
                    }
                }

                if(found ==  0)
                 cout << "Student Not Found!\n";

                 break;
            }
            case 4:
            {
                int r, found = 0;
                cout <<"Enter Roll Number: ";
                cin  >>  r;

                for(int i = 0;  i < count; i++)
                {
                    if(roll[i] == r)
                    {
                        cout <<"Enter New Marks: ";
                        cin >> marks[i];

                        cout << "Marks Updated Succesfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                     cout <<"Student Not Found!\n";

                     break;
            }
            case 5:
            {
                int r, found = 0;

                cout << " Enter Roll Number to Delete : ";
                cin  >> r;

                for(int i = 0; i < count ; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j< count-1;j++)
                        {
                            roll[j]=roll[j+1];
                            name[j]= name[j+1];
                            marks[j]=marks[j+1];


                        }
                        count--;
                        found = 1;

                        cout <<"Record Deleted Succesfully!\n";
                        break;

                    }
                    if(found == 0)
                    cout <<"Student Not Found!\n";

                    break;
                }
                case 6:
                {
                    cout <<"Thank You!\n";
                    break;
                }
                default:
                cout <<"Invalid Choice!\n";
            }
        }
    }   

     while (choice != 6);
    return 0;
}