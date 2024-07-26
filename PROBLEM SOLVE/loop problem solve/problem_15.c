#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    printf("Enter any number(x): ");
    scanf("%d", &x);
    printf("Enter any number(y): ");
    scanf("%d", &y);

    int result = 1, flag = 0;
    for (int i = 1; i <= y; i++)
    {
        result = result * x;
        flag = 1;
    }
    if (flag == 1)
        printf("\n%d^%d: %d\n", x, y, result);
    else
        printf("\n%d^%d: 1\n", x, y);
    return 0;
}