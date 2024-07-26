#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, flag = 0;
    scanf("%d", &num);
    n = num;
    if (num > 0)
    {
        while (n != 1)
        {
            if (n % 2 != 0)
            {
                flag = 1;
                break;
            }
            n /= 2;
        }
        if (flag == 0)
            printf("Yes, %d is a power of 2\n", num);
        else
            printf("No,%d is not a power of 2\n", num);
    }
    else if (num < 0)
    {
        printf("Negative input is not valid\n");
    }
    else if (num == 0)
    {
        printf("Zero is not a valid input\n");
    }
    return 0;
}