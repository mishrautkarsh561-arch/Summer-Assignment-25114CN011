#include <stdio.h>
int sumofDigits(int n)
{

    int digit,sum = 0;

    while(n!=0)
    {
        digit = n % 10;
        sum = sum +digit;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits = %d",sumofDigits(n));
    return 0;
}