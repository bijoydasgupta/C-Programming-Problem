#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);

    int feet = num/12;
    int inch = num%12;

    printf("%d ft %d inch\n",feet,inch);
    return 0;
}