#include <iostream>
using namespace std;

int main ()
{
    int choice;
    float num1,num2;
    do 
    {
      cout << "\n======MENU DRIVEN CALCULATOR==========\n";
      cout <<"1.Addition\n";
      cout <<"2.Subtraction\n";
      cout <<"3.Multiplication\n";
      cout <<"4.Division\n";
      cout <<"5.Modulus\n";
      cout <<"6.Exit\n";
      cout <<"Enter Your Choice: ";
      cin >> choice;

      switch(choice)
      {
        case 1:
        cout <<"Enter First Number: ";
        cin >> num1;
        cout <<"Enter Second Number: ";
        cin >> num2;
        cout << "Result = " << num1 + num2 << endl;
        break;
        case 2:
        cout  <<"Enter First Number: ";
        cin >> num1;
        cout <<"Enter Second Number: ";
        cin >> num2;
        cout <<"Result = " << num1-num2 << endl;
        case 3: 
        cout <<"Enter First Number: ";
        cin >> num1;
        cout <<"Enter Second Number: ";
        cin >>num2;
        cout <<"Result =  " << num1*num2 << endl;
        break;
        case 4:
        cout <<"Enter First Number: ";
        cin >> num1;
        cout <<"Enter Second Number: ";
        cout << num2;
        if(num2 != 0)
      cout <<"Result  = " << num1 /num2 << endl;
      else
      cout <<"Devision by Zero is Not Allowed!" << endl;
      break;
      case 5:
      {
        int a, b;
        cout <<"Enter First Integer: ";
        cin >> a;
        cout <<"Enter Second Integer: ";
        cin >> b;

        if(b != 0)
        cout <<"Result = " << a % b << endl;
        else
        cout <<"Modulus by Zero is Not Allowed!";
        break;
      }
      case 6 : 
      cout <<"Thank You for Using Calculator!\n";
      break;

      default :
      cout <<"Invalid Choice! Please Try Again.\n";
    }
   } while(choice !=  6);
    return 0;
  }
