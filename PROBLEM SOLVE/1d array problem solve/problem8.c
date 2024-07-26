#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n, index;
      scanf("%d", &n);
      int a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      int max = a[0];
      int max_index = 0;
      int min = a[0];
      int min_index = 0;
      for (i = 1; i < n; i++)
      {
            if (max < a[i])
            {
                  max = a[i];
                  max_index = i;
            }
      }
      printf("Max:%d, Index:%d\n", max, max_index);
      for (i = 1; i < n; i++)
      {
            if (min > a[i])
            {
                  min = a[i];
                  min_index = i;
            }
      }
      printf("Min:%d, Index:%d\n", min, min_index);
      return 0;
}
