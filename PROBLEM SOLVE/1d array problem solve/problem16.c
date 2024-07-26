#include <stdio.h>
#include <stdlib.h>
int main()
{
      int a[100];
      int n;
      scanf("%d", &n);
      for (int i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      for (int i = 0; i < n; i++)
      {
            if (i % 2 != 0)
            {
                  a[i] = 0;
            }
      }
      printf("\n");
      for (int i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      return 0;
}
