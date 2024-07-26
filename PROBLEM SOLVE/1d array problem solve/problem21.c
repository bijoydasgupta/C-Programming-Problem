#include<stdio.h>
int main ()
{
      int n, i, j, k, found;
      int a[100], b[100];
      scanf("%d",&n);
      for(i=0; i<n; i++){
            scanf("%d",&a[i]);
      }
      int m;
      scanf("%d",&m);
      for(i=0; i<m; i++){
            scanf("%d",&b[i]);
      }
      printf("Difference\n");
      for(i=0; i<n; i++){
            k=0;
            for(j=0; j<n; j++){
                  if(a[i]==b[j]){
                        k++;
                        break;
                  }
            }
            if(k==0)
                  printf("%d ",a[i]);
      }
      return 0;
}

