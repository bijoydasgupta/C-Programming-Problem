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
      for(j=0; j<m; j++){
            scanf("%d",&b[j]);
      }
      int p=0;
      for(i=0; i<n; i++){
            found=0;
            for(j=0; j<m&&!found; j++){
                  if(a[i]==b[j])
                        found=1;
            }
            if(found)
                  c[p++]=a[i];
      }
      printf("\n");
      if(found){
            for(i=0; i<p; i++){
                  printf("%d ",c[i]);
            }
      }
      else{
            printf("Empty set\n");
      }
      return 0;
}
