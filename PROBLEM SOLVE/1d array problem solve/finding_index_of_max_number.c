#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("Max: %d\n", max);
    printf("index: ");
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            // if (flag != 1)
            // {
            //     printf(",");
            // }
            printf("%d", i);
            if (i != n - 1)
                printf(",");
            // flag = 0;
        }
    }
    return 0;
}