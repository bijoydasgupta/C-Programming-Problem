#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, flag = 0;
    scanf("%d", &num);
    n = num;
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
    return 0;
}