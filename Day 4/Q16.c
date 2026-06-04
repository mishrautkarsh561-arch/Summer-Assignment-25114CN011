#include <stdio.h>

int main()
{
    int num,temp,digit,sum;

    printf("Armstrong numbers from 1 to 1000 are:\n");
    for(num=1;num<=1000;num++)
    {
        temp=num;
        sum=0;
    while(temp!=0)
    {
        digit = temp%10;
        sum=sum+digit*digit*digit;
        temp =temp/10;
    
    }
    if(sum==num)
    {
        printf("%d",num);
    }
    }
    return 0;
}