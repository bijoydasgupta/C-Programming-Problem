#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    int sum=0;
    while(num!=0)
    {
        int digit = num%10;
        sum = sum + digit;
        num/=10;
    }
    printf("Sum of digits = %d\n",sum);
    return 0;
}