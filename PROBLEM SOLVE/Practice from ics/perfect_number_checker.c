#include <stdio.h>
int main ()
{
    int num, sum=0;
    scanf("%d",&num);

    printf("Divisors: ");
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\n");
    if(num==sum) printf("Perfect Number\n");
    else printf("Not Perfect Number\n");
    return 0;
}