#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n, i;
      scanf("%d", &n);
      int a[n], b[n], c[n], sum = 0;
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      for (i = 0; i < n; i++)
      {
            scanf("%d", &b[i]);
      }
      for (i = 0; i < n; i++)
      {
            c[i] = a[i] + b[i];
            printf("%d ", c[i]);
      }
      printf("\n");
      return 0;
}
