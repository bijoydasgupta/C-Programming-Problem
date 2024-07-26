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
      int num, pos;
      printf("number: ");
      scanf("%d", &num);
      printf(" position: ");
      scanf("%d", &pos);
      for (i = n; i > pos - 1; i--)
      {
            a[i] = a[i - 1];
      }
      a[pos] = num;
      for (i = 0; i <= n; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\n");
      return 0;
}
