#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100],str2[100];
    int choice;

    do
    { 
        cout <<"\n======STRING OPERATION MENU=====";
        cout <<"\n1.Enter String";
        cout <<"\n2.Find Length";
        cout <<"\n3. Copy String";
        cout <<"\n4.Concatenate Strings";
        cout <<"\n5.Compare String";
        cout <<"\n6.Reverse String";
        cout <<"\n7.Exit";
        cout <<"\nEnter your choice: ";
        cin >> choice;

        cin.ignore();
        switch(choice)
        {
            case 1:
            cout <<"Enter String: ";
            cin.getline(str1,100);
            break;
            case 2:
            cout <<"Length = " <<strlen(str1);
            break;
            case 3:
            strcpy(str2,str1);
            cout <<"Copied String: " << str2;
            break;
            case 4:
              cout  <<"Enter another String: ";
              cin.getline(str2,100);
              if(strcmp(str1,str2) == 0)
              cout <<"Both strings are Equal ";
              else
                cout <<"Strings are not Equal";
                break;

            case 5:
             cout <<"Enter another String: ";
             cin.getline(str2,100);
             if(strcmp(str1,str2) == 0)
             cout <<"both strings are Equal";
             else
             cout <<"Strings are Not Equal";
             break;
             case 6:
              strcpy(str1,str2);
              strrev(str2);
              cout <<"Revesed String: "<<str2;
              break;
              default:
              cout <<"Invalid Choice!";


        }

    }while(choice != 7);
    return 0;
}
