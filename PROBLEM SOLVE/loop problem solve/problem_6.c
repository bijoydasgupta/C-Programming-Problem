#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, n, num;
    printf("Enter any number(X): ");
    scanf("%d", &x);
    printf("Enter choice(N): ");
    scanf("%d", &n);

    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num == x)
        {
            printf("Right, Player-2 wins!\n");
            flag = 0;
            break;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n", n - i);
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Player-1 wins!");
    }
    return 0;
}