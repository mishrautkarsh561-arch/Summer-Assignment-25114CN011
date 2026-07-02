#include <iostream>
#include <cstring>
using namespace std;

int main()
{
     char name[5][50], temp[50];
  cout <<"Enter 5 names:\n";
  for(int i = 0; i < 5; i++)
  {
    cin.getline(name[i], 50);
  }
  for(int i = 0; i< 4; i++)
  {
    for(int j = i+1; j <5; j++)
    {
        if(strcmp(name[i], name[j]) > 0)
        {
            strcpy(temp, name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j],temp);
        }
    }
  }
  cout <<"\nNames in Alphabetical Order:\n";
  for(int i = 0;i < 5; i++)
  {
    cout << name[i] << endl;
  }
  return 0;
  }
    
    

    