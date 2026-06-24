#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout <<"Enter string:";
    cin >> str;

    int i = 0;
    while(str[i] !='\0')
    {
        char current = str[i];
        int count = 0;
        while(str[i] ==  current)
        {
            count++;
            i++;
        }
        cout << current << count;
    }
    return 0;
}