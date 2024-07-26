#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, gcd, lcm;
    printf("Enter any number(num1): ");
    scanf("%d", &num1);
    printf("Enter any number(num2): ");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    int max = (num1 > num2) ? num1 : num2;
    int i = max;
    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i++;
    }

    printf("\nGCD : %d\n", gcd);
    printf("LCM : %d\n", lcm);
    return 0;
}