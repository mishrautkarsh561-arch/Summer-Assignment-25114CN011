#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int rollNo;
    int marks[5];
    int total = 0;
    float percentage;
    char grade;
    cout << "=======MARKSHEET GENERATION SYSTEM =========\n ";

    cout <<"Enter Student Name: ";
    getline (cin , name);

    cout <<"Enter Roll Number: ";
    cin >> rollNo;
    cout <<"\nEnter marks of 5 subjects (out of 100):\n ";

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i+1 <<": ";
        cin >> marks[i];
        total += marks[i];
        percentage = total/5.0;

        if(percentage >= 90)
        grade = 'A';
        else if(percentage >= 80)
        grade = 'B';
        else if(percentage >= 70)
        grade = 'C';
        else if(percentage >= 60)
        grade = 'D';
        else if(percentage >= 40)
        grade = 'E';
        else 
        grade = 'F';
        cout << "\n\n";
        cout <<"==========================\n";
        cout <<"\t\tMARKSHEET\n";
        cout <<"==========================\n";
        cout <<"Student Name : "<< name << endl;
        cout <<" Roll Number :  " << rollNo << endl;
        cout <<"---------------------------\n";

        for(int i = 0; i< 5; i++)
        {
            cout << left << setw(15) << ("Subject" + to_string(i +1 ))
            << setw(10) << marks[i] << endl;
        }
        cout << "-----------------------------\n";
        cout << "Total Marks: " << total <<" /500" << endl;
        cout << fixed << setprecision(2);
        cout <<"Percentage :  "<< percentage << "%" << endl;
        cout <<"Grade      :  "<< grade  << endl;

        if(percentage >=40)
        cout <<"Result      : PASS" <<endl;
        else
        cout <<"Result       :FAIL" << endl;
        cout <<"=========================\n";
        return 0;
    }
}