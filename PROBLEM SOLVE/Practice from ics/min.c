#include <stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    int smallest = (num1<num2 || num1>num2) ? num1 : num2;
    printf("The smallest number is: %d\n", smallest);

    return 0;
}