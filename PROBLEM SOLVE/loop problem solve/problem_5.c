#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        for (int i = x; i >= y - 1; i--)
        {
            if (i > y)
            {
                printf("%d", i * i);
                printf(",");
            }
            else
            {
                printf("Reached!\n");
                break;
            }
        }
    }
    else if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            if (i <= y - 1)
            {
                printf("%d", i * i);
                printf(",");
            }
            else
            {
                printf("Reached!\n");
                break;
            }
        }
    }
    else if (x == y)
    {
        printf("Reached!\n");
    }
    return 0;
}