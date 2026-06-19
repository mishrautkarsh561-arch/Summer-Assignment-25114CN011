#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter order of  matrix:";
    cin >> n;
    int arr[10][10];
    int sum = 0;
    cout <<"Enter  matrix elements:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< n; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << "Diagonal Sum = " << sum;
    return 0;
}