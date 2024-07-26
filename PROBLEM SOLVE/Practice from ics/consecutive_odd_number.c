#include <stdio.h>
int main ()
{
    int i,n,x;
    scanf("%d",&x);
    n=x;

    printf("Consecutive odd number starting from:");
    if(x%2==0){
        x+=1;
    }
    printf("%d\n",x);

    for(int i=0; i<n; i++)
        printf("%d ",x+2*i);
    printf("\n");
    return 0;
}