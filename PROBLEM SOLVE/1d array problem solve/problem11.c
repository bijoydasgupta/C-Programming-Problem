#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n, i;
      scanf("%d", &n);
      int a[n], b[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      printf("Array A: ");
      for (i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      for (i = 0; i < n; i++)
      {
            b[i] = a[i];
      }
      printf("\nArray B: ");
      for (i = n - 1; i >= 0; i--)
      {
            printf("%d ", b[i]);
      }
      return 0;
}
