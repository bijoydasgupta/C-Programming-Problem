#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        else if (i % 2 == 0)
        {
            sum -= i;
        }
    }
    printf("Result: %d\n", sum);
    return 0;
}