#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = i + 1; count < n; i++, j++)
    {
        sum = sum + i * i * j;
        count++;
    }
    printf("Result: %d\n", sum);
    return 0;
}