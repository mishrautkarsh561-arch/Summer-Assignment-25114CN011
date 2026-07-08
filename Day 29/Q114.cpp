#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice;
    int i , pos, value, key;
    
    cout <<"Enter the number of elements";
    cin >> n;

    cout <<"Enter array elements: ";
    for(i =  0; i < n;  i++)
    {
        cin >> arr[i];
    }
    do
    {
        cout <<"\n ======MENU ======";
        cout <<"\n1.Display Array";
        cout <<"\n2.Insert  Element";
        cout <<"\n3.Delete Element ";
        cout <<"\n4. Search Element";
        cout  <<"\n5.Update Element";
        cout <<"\n6. Exit";
        cout <<"Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout <<"\nArray Elements: ";
            for(i = 0; i < n; i++)
            {
                cout << arr[i]<< " ";
            }
            cout << endl;
            break;
            case 2:
            cout <<"Enter position(0 to " << "): ";
            cin >> pos;
            cout <<"Enter value: ";
            cin >> value;
            if(pos >= 0 && pos < n)
            {
                for(i = pos; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }

                n--;
                cout <<"Element deleted succesfully\n";

            }
            else
            {
                cout <<"Invalid position.\n";
            }
            break;
        
           case 3:

           cout <<"Enter position to delete: ";
           cin >> pos;

           if(pos >= 0 && pos < n)
           {
            for(i = pos;i< n-1; i++)
            {
                arr[i] = arr[i+1];
            }

            n--;
            cout << "Element Deleted succesfully.\n";
           }
         else
         {
            cout <<"Invalid position.\n";
         }
         break;
         case 4:
         cout <<"Enter element to search";
         cin >> key;

         for(i = 0; i< n; i++)
         {
            if(arr[i] == key)
            {
                cout <<"Element fouund at index  " << i << endl;
                break;
            }
         }
         if(i == n)
         {
            cout <<"Element not ound.\n";
         }
         break;
         case 5:
         cout <<"Enter position to update : ";
         cin >> pos;

         if(pos >= 0 && pos < n)
         {
            cout <<"Enter new value: ";
            cin >> value;

            arr[pos] = value;
            cout <<"Element updated succesfully.\n";
         }
         else
         {
            cout <<"Invalid position.\n";
         }
        break;
        case 6 :
         cout << "Existing Program.....\n";
         break;

         default:
            cout <<"Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
    
}