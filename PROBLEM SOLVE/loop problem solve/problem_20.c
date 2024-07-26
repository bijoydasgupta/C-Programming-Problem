#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0, digit = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        digit = digit * 10 + i;
        sum = sum + digit;
    }

    printf("\nSum: %d\n", sum);
    return 0;
}