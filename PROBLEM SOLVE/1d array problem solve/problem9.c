#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n, count = 0;
      scanf("%d", &n);
      char a[n];
      for (i = 0; i < n; i++)
      {
            scanf("%c", &a[i]);
      }
      for (i = 0; i < n; i++)
      {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
                a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                  count++;
            }
      }
      printf("Count:%d\n", count);
      return 0;
}
