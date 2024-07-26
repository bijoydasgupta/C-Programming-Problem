#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int a = 0, b = 1, fibo;
    for (int i = 1; i <= n; i++)
    {
        fibo = a + b;
        printf("%d", b);
        if (i < n)
            printf(",");
        a = b;
        b = fibo;
    }
    return 0;
}