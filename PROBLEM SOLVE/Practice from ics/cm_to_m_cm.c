#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);

    int meter = num/100;
    int centimeter = num%100;
    
    printf("%d m %d cm\n",meter,centimeter);
    return 0;
}