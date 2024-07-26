#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        float a, hw, ct, mt, tf;
        scanf("%f%f%f%f%f", &a, &hw, &ct, &mt, &tf);

        if (tf >= 90 && tf <= 100)
        {
            printf("Sudent %d: A\n", i);
        }
        else if (tf >= 86 && tf <= 89)
        {
            printf("Sudent %d: A-\n", i);
        }
        else if (tf >= 82 && tf <= 85)
        {
            printf("Sudent %d: B+\n", i);
        }
        else if (tf >= 78 && tf <= 81)
        {
            printf("Sudent %d: B\n", i);
        }
        else if (tf >= 74 && tf <= 77)
        {
            printf("Sudent %d: B-\n", i);
        }
        else if (tf >= 70 && tf <= 73)
        {
            printf("Sudent %d: C+\n", i);
        }
        else if (tf >= 66 && tf <= 69)
        {
            printf("Sudent %d: C\n", i);
        }
        else if (tf >= 62 && tf <= 65)
        {
            printf("Sudent %d: C-\n", i);
        }
        else if (tf >= 58 && tf <= 61)
        {
            printf("Sudent %d: D+\n", i);
        }
        else if (floor(tf) == 55)
        {
            printf("Sudent %d: F\n", i);
        }
        else if (tf > 55 && tf <= 57)
        {
            printf("Sudent %d: D\n", i);
        }
    }
    return 0;
}