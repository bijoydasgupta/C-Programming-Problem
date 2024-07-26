#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n;
      scanf("%d", &n);
      int a[n], b[n];
      for (i = 0; i < n; i++)
      {
            scanf("%d", &a[i]);
      }
      int value, found = 0;
      printf("Enter any value: ");
      scanf("%d", &value);
      for (i = 0; i < n; i++)
      {
            if (value == a[i])
            {
                  b[found] = i;
                  found++;
            }
      }
      if (found == 0)
      {
            printf("\nNOT FOUND\n");
      }
      else
      {
            printf("\nFOUND at index position: ");
            for (i = 0; i < found; i++)
            {
                  if (i != found - 1)
                        printf("%d,", b[i]);
                  else
                        printf("%d", b[i]);
            }
      }
      printf("\n");
      return 0;
}
