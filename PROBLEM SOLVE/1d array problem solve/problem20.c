#include<stdio.h>
int main ()
{
      int n, i, j, found;
      int a[100], b[100], c[100];
      scanf("%d",&n);
      for(i=0; i<n; i++){
            scanf("%d",&a[i]);
      }
      int m;
      scanf("%d",&m);
      for(i=0; i<m; i++){
            scanf("%d",&b[i]);
      }
      int p=0;
      for(i=0; i<n; i++){
            c[i]=a[i];
      }
      p=n;
      for(i=0; i<m; i++){
            found=0;
            for(j=0; j<n&&!found; j++){
                  if(b[i]==a[j])
                        found=1;
            }
            if(!found)
                  c[p++]=b[i];
      }
      printf("\n");
      for(i=0; i<p; i++){
            printf("%d ",c[i]);
      }
      return 0;
}

