#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, a[100];
      int n;
      scanf("%d", &n);
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      for (i = 0; i < n; i++)
      {
            if (a[i] % 3 == 0)
            {
                  a[i] = -1;
            }
      }
      printf("\n");
      for (i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      return 0;
}
