#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[100];
    int choice, total = 0;

    while(true)
    {
        cout <<"\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout <<"1.Add Book\n";
        cout <<"2.Dispaly Books\n";
        cout <<"3.Search Book\n";
        cout << "4.Delete Last Book\n";
        cout <<"5.Exit\n";
        cout <<"Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            cout <<"Enter Book Name: ";
            cin.ignore();
            getline(cin,book[total]);
            total++;
            cout <<"Book Added Succesfully!\n";
            break;
            case 2:
            if(total == 0)
            {
            cout <<"No Books Available.\n";
            }
            else{
                cout <<"\n-----Book List------\n";
                for(int i = 0; i< total; i++)
                {
                    cout << i + 1 << " . " <<book[i] << endl;
                }
            }
            break;
            case 3 :
            {
                if(total == 0)
                {
                    cout << "No Books Availaible.\n";
                    break;
                }
                string searchBook;
                bool found = false;
                cout <<"Enter Book Name to Search: ";
                cin.ignore();
                getline(cin,searchBook);

                for (int i = 0; i< total; i++)
                {
                    if(book[i]  == searchBook)
                    {
                        cout <<"Book found at position" << i +1 << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout <<"Book not Found.\n" ;
                }
                break;
            }
            case 4:
                if (total == 0)
            {
                cout <<"No Books to Delete.\n";
                }
                else
            {
                total--;
                cout <<"Last Book Deleted Succesfully!\n";
            }
            break;
            case 5:
            cout << "Thank You for Using Library Management System!\n";
            return 0;

            default:
            cout <<"Invalid Choice! Please Try Again.\n";


    }

}
return 0;
}