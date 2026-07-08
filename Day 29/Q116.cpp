#include <iostream>
#include <string>
using namespace std;

class Inventory
{
    public:
       int id;
       string name;
       int quantity;
       float price;

};

int main()
{
    Inventory item[100];
    int count = 0;
    int choice;

 do
 {
    cout <<"\n====== INVENTORY MANAGEMENT SYSTEM =========\n";
    cout <<"1.Add Product\n";
    cout <<"2. Display Products\n";
    cout <<"3.Search Product\n";
    cout <<"4.Update Product\n";
    cout <<"5.Delete Product\n";
    cout <<"6.Exit\n";
    cout <<"Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            cout <<"\nEnter Product ID: ";
            cin >> item[count].id;

            cout <<"Enter Product Name: ";
            cin >> item[count].name;

            cout <<"Enter Quantity: ";
            cin >> item[count].quantity;

            cout <<"Enter Price: ";
            cin >> item[count].price;

            count++;

            cout <<"product Added Succesfully!\n";
            break;
        }
        case 2:
        {
            if(count == 0)
            {
                cout <<"No Products Availaible!\n";

            }
            else
                 {
                    cout <<"\n------Product List--------\n";

                    for(int i = 0; i<count; i++)
                    {
                        cout << "\nProduct " << i+1 << endl;
                        cout <<"ID:    "<< item[i].id << endl;
                        cout  <<"Name: "<< item[i].name << endl;
                        cout <<"Quantity : "<<item[i].quantity << endl;
                        cout <<"Price:   "<<item[i].price << endl;

                    }
                 }
                 break;
                 case 3:
                 {
                    int id, found = 0;
                    cout <<"Enter Product ID to Search: ";
                    cin >> id;
                    for(int i = 0; i < count; i++)
                    {
                        if(item[i].id == id)
                        {
                            cout <<"\nProduct Found\n";
                            cout <<"ID:  " << item[i].id <<  endl;
                            cout <<"Name: " << item[i].name << endl;
                            cout <<"Quantity : "<< item[i].quantity << endl;
                            cout <<"Price : " << item[i].price << endl;

                            found = 1;
                            break;
                        }
                    }
                    if(found ==  0)
                    {
                        cout <<"Product Not Found!\n";
                    }

                    break;
                 }
                 case 4:
                 {
                    int id, found = 0;

                    cout <<"Enter Product ID to Update: ";
                    cin >> id;

                    for(int i = 0; i <count; i++)
                    {
                        if(item[i].id == id)
                        {
                            cout  <<"Enter New Product Name: ";
                            cin >> item[i].name;

                            cout <<"Enter New Quantity: ";
                            cin >> item[i].quantity;

                            cout << "Enter New Price: ";
                            cin >> item[i].price;

                            found = 1;
                            break;
                        }

                    }

                    if(found == 0)
                    {
                      cout <<"Product Not Found\n";
                    }
                    break;
                 }
                 case 5:
                 {
                    int id, found = 0;

                    cout <<"Enter Product ID to Delete: ";
                    cin >> id;
                    for(int i = 0; i< count ; i++)
                    {
                        if(item[i].id = id)
                        {
                            for(int j=i ; j<count-1; j++)
                            {
                                item[j] = item[j+1];
                            }
                            count--;

                            cout <<"Product Deleted Succesfully!\n";
                            found = 1;
                            break;
                        }
                    }
                    if(found == 0)
                    {
                        cout <<"Product Not Found!\n";
                    }
                    break;
                 }
                 case 6:
                 {
                    cout <<"Thank You!\n";
                    break;
                 }
                 default:
                 {
                    cout <<"Invalid Choice!\n";
                 }
        }
    }
 } while (choice != 6);
 return 0;
 
}