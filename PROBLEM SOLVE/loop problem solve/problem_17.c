#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, flag = 0;
    printf("Enter an number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("\nNot Prime\n");
    }
    else if (num == 2)
    {
        printf("\nPrime\n");
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i != 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("\nPrime\n");
        else
            printf("\nNot Prime\n");
    }
    return 0;
}