#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, temp, a[100], b[100];
      int n;
      scanf("%d", &n);

      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      printf("\n");
      int m;
      scanf("%d", &m);
      for (i = 0; i < m; i++)
      {
            scanf("%d", &b[i]);
      }
      for (i = 0; i < n; i++)
      {
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
      }
      printf("Array A: ");
      for (i = 0; i < m; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\nArray B: ");
      for (i = 0; i < n; i++)
      {
            printf("%d ", b[i]);
      }
      return 0;
}
