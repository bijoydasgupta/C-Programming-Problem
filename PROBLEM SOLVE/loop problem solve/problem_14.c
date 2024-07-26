#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, r, fact_n = 1, fact_r = 1, fact_n_r = 1;
    printf("Enter any number(n): ");
    scanf("%d", &n);
    printf("Enter any number(r): ");
    scanf("%d", &r);

    for (int i = n; i >= 1; i--)
    {
        fact_n *= i;
    }
    for (int i = r; i >= 1; i--)
    {
        fact_r *= i;
    }
    for (int i = n - r; i >= 1; i--)
    {
        fact_n_r *= i;
    }

    int nCr = fact_n / (fact_r * fact_n_r);
    printf("nCr: %d\n", nCr);
    return 0;
}