#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i % 2);
        if (i != n)
            printf(",");
    }
    return 0;
}