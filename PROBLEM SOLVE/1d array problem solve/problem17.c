#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, j, temp, a[100];
      int n;
      scanf("%d", &n);
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      for (i = 0; i < n - 1; i++)
      {
            for (j = i + 1; j < n; j++)
            {
                  if (a[i] > a[j])
                  {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                  }
            }
      }
      printf("After sorting\n");
      for (i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      return 0;
}
