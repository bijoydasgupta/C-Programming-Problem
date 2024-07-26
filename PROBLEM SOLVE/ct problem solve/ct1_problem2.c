#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, digit, sum, fdigit;
    int upper, lower;
    printf("Enter the lower and upper bound:\n");
    scanf("%d %d", &lower, &upper);
    // finding pixie
    for (int j = lower; j <= upper; j++)
    {

        n = j;
        // for changeable value
        sum = 0;
        fdigit = 0;
        // Operation
        while (n != 0)
        {
            digit = n % 10;
            n /= 10;
            if (n == 0)
            {
                fdigit = digit;
            }
        }
        n = j;
        while (n != 0)
        {
            digit = n % 10;
            sum += pow(digit, 2);
            n /= 10;
        }
        if (fdigit == 3 && sum % 3 == 0)
        {
            printf("%d", j);
            if (j != upper)
                printf(",");
        }
    }
}