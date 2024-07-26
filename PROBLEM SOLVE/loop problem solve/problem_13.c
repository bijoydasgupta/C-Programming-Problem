#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int result = 1;
    printf("%d!=", n);
    for (int i = n; i >= 1; i--)
    {
        result = result * i;
        printf("%d", i);
        if (i > 1)
            printf("X");
    }
    printf("=%d\n", result);
    return 0;
}