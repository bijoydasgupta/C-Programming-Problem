#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=2; i<num; i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0) printf("prime\n");
    else printf("Not prime\n");
    return 0;
}