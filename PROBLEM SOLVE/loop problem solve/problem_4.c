#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    float num, sum = 0, avg;

    int div = n;
    while (n--)
    {
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / div;
    printf("Average of %d-inputs: %f\n", div, avg);
    return 0;
}