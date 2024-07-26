#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num, count=0;
    scanf("%d",&num);

    int n = num;
    while(n!=0){
        int digit = n%10;
        count++;
        n/=10;
    }
    printf("%d",count);
    return 0;
}
