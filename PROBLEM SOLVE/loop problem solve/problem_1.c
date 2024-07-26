#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; count < n; i++)
    {
        printf("%d", i);
        if (i != n)
            printf(",");
        count++;
    }
    return 0;
}