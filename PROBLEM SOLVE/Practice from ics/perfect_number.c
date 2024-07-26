#include <stdio.h>
int main ()
{
    int num;
    printf("\nEnter any number: ");
    scanf("%d",&num);
    int num1=num, sum=0;
    int num2=num, product=1;
    while(num1!=0)
    {
        int digit = num1%10;
        sum = sum + digit;
        num1/=10;
    }
    while(num2!=0)
    {
        int digit = num2%10;
        product *= digit;
        num2/=10;
    }
    if(sum==product){
        printf("%d is perfect number\n",num);
    }
    else{
        printf("%d is not perfect number\n",num);
    }
    return 0;
}