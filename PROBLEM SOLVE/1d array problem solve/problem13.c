#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n, i;
      scanf("%d", &n);
      int a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      int pos;
      printf("position: ");
      scanf("%d", &pos);

      for (i = pos; i < n; i++)
      {
            a[i] = a[i + 1];
      }
      n--;
      for (i = 0; i < n; i++)
      {
            printf("%d ", a[i]);
      }
      return 0;
}
