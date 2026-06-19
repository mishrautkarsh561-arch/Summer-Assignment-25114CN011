#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout <<"Enter rows and columns:";
    cin >> r >> c;

    int arr[10][10];
    cout <<"Enter matrix elements :\n";
    for(int i = 0; i < r; i++)
        {
            for(int j = 0; j< c; j++)
            {
                cin >>  arr[i][j];
            }
        }
        cout <<"Transpose of Matrix:\n";
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < r; j++)
            {
                cout << arr[j][i] <<" ";
            }
            return 0;
        }