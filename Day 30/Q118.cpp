#include<iostream>
#include <string>
using namespace std;

class Library
{
    int bookId[100];
    string bookName[100];
    string author[100];
    int totalBooks = 0;

    public:
    void addBook()
    {
        cout <<"\nEnter Book ID: ";
        cin >> bookId[totalBooks];
        cin.ignore();
        cout <<"Enter Book Name: ";
        getline(cin,bookName[totalBooks]);

        totalBooks++;

        cout <<"\nBook Added Successfully\n ";
    }
    void displayBooks()
    {
        if(totalBooks == 0)
        {
            cout <<"\nNo Books Availaible!\n";
            return;
        }

        cout <<"\n----Library Books-------\n";
        for(int i = 0; i < totalBooks; i++)
        {
            cout  <<"\nBook " << i+1 << endl;
            cout <<"Book ID : " << bookId[i] << endl;
            cout <<"Book Name : "<< bookName[i] << endl;
            cout <<"Author     : "<<  author[i] << endl;
        }
    }
    void searchBook()
    {
        int id;
        cout <<"Enter Book ID to Search: ";
        cin >> id;

        for(int i = 0; i < totalBooks; i++)
        {
            if(bookId[i] == id)
            {
                cout << "\nBook Found!\n";
                cout <<"BookID   : "<< bookId[i] << endl;
                cout <<"Book Name : "<< bookName[i] << endl;
                cout <<"Author     : " << author[i] << endl;
                return;
            }
        }
        cout << "\nBook Not Found!\n";

    }
    void deleteBook()
    {
        int id;
        cout <<"\nEnter Book ID to Delete: ";
        cin >> id;
        
        for(int i = 0;i < totalBooks; i++)
        {
            if (bookId[i] ==  id)
            {
                for(int j = i; j < totalBooks - 1;j++)
                {
                    bookId[j] = bookId[j+1];
                    bookName[j] = bookName[j+1];
                    author[j] = author[j+1];
                }
                totalBooks--;
                cout <<"\nBook Deleted Succesfully!\n";
                return;
            }
        }
        cout  << "\nBook Not Found!\n";

    }

    };

    int main()
    {
        Library lib;
        int choice;

        do
        {
            cout <<"\n========= MINI LIBRARY SYSTEM ===========\n";
            cout <<"1.Add Book\n";
            cout <<"2.Display Books\n";
            cout <<"3.Search Book\n";
            cout <<"4.Delete Book\n";
            cout <<"5.Exit\n";
            cout <<"Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                  lib.addBook();
                  break;
                  case 2:
                  lib.displayBooks();
                  break;
                  case 3:
                  lib.searchBook();
                  case 4:
                  lib.deleteBook();
                  case 5:
                  cout <<"\nThank You for Using Mini Libraray  System!\n";
                  break;
                  default:
                    cout <<"\nInvalid Choice!\n";


            }

        }while(choice !=  5);
        return 0;
    }
