#include <stdio.h>
int main ()
{
    int a, b, num, count, prime, temp;
    scanf("%d %d",&a,&b);

    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("Prime numbers between %d and %d are\n",a,b);

    for(num=a; num<=b; num++){
        prime=1;
        for(count=2; count<num; count++){
            if(num%count==0){
                prime=0;
                break;
            }
        }
        if(prime) printf("%d ",num);
    }
    return 0;
}