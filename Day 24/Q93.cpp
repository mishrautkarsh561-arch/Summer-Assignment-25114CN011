#include<iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;

    cout <<"Enter first string:";
    cin.getline(str1, 100);
    cout <<"Enter second string:";
    cin.getline(str2, 100);
   while(str1[len1] !='\0')
   {
    len1++;
   }
   while(str2[len2] !='\0')
   {
    len2++;
   }
   if(len1 != len2)
   {
    cout <<"Strings are not rotations.";
    return 0;
   }
   bool found = false;
   for(int shift = 0; shift < len1; shift++)
   {
    bool match = true;
    for(int i = 0; i < len1; i++)
   {
    if(str1[(i + shift) % len1] != str2[i])
    {
        match = false;
        break;
    }
   }
   if(match)
   {
    found = true;
    break;
   }
}
if(found)
   cout <<"Strings are rotations.";
   else
   cout <<"Strings are not rotations.";

   return 0;
}
