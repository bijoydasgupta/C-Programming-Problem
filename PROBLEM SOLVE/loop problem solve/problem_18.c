#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    int tmp = num;
    while (tmp != 0)
    {
        int digit = tmp % 10;
        sum = sum * 10 + digit;
        tmp /= 10;
    }
    if (sum == num)
        printf("\nYes\n");
    else
        printf("\nNo\n");
    return 0;
}