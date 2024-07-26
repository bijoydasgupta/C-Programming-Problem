#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n, temp;
      scanf("%d", &n);
      int a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      for (i = 1; i <= n / 2; i++)
      {
            temp = a[n - i];
            a[n - i] = a[i - 1];
            a[i - 1] = temp;
      }
      printf("\nReversed Array\n");
      for (i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      return 0;
}
