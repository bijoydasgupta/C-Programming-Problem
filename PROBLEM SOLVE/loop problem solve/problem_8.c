#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int digit = num % 10;
        sum = sum * 10 + digit;
        num /= 10;
    }

    printf("Reverse of the number: %d\n", sum);
    return 0;
}