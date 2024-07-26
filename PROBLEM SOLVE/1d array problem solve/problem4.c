#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n, i;
      scanf("%d", &n);
      float a[n], sum = 0, avg;
      for (i = 0; i < n; i++)
      {
            scanf("%f", &a[i]);
      }
      for (i = 0; i < n; i++)
      {
            sum += a[i];
      }
      avg = sum / n;
      printf("Average:%.2f\n", avg);
      return 0;
}
