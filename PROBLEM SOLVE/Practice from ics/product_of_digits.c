#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    int product=1;
    while(num!=0)
    {
        int digit = num%10;
        product *= digit;
        num/=10;
    }
    printf("Product of digits = %d\n",product);
    return 0;
}