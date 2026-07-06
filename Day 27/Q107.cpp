#include <iostream>
#include <string>
using namespace std;
int main()
{
    int empId;
    string empName;
    float basic,hra,da,pf, grossSalary, netSalary;

    cout <<"======Salary Management System ========\n";

    cout <<"Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout <<"Enter Employee Name: ";
    getline(cin, empName);
    cout <<"Enter Basic Salary: ";
    cin >> basic;
    hra = basic*0.20;
    da = basic *0.10;
    pf= basic *0.08;

    grossSalary = basic +hra + da;
    netSalary = grossSalary - pf;
    cout <<"\n======Salary Slip =========\n";
    cout <<"Employee ID        : "<< empId << endl;
    cout <<"Employee Name      : "<< empName << endl;
    cout <<"Basic Salary       : "<< basic << endl;
    cout <<"HRA (20%)         : "<< hra << endl;
    cout <<"DA  (10%)         : " << da << endl;
    cout <<"PF (8%)           : "<< pf << endl;
    cout <<"Gross Salary      : "<< grossSalary << endl;
    cout <<"Net Salary        : "<< netSalary  << endl;

     return 0;
}