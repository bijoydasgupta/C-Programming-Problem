#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    int ldigit, fdigit, sum=0, digit;
    int n = num;
    while(n != 0)
    {
        digit = n%10;
        if(n==num){
            ldigit=digit;
        }
        n/=10;
        if(n==0){
            fdigit=digit;
        }
    }
    printf("\nFirst Digit = %d\n",fdigit);
    printf("Last Digit = %d\n",ldigit);
    printf("\nFactors are: ");
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
            if(i!=num)
                printf(",");
            sum+=i;
        }
    }
    printf("\nTotal Sum of factors = %d\n",sum);
    if((fdigit+ldigit)<7 && sum>num)
    {
        printf("\n%d is a pixie number\n",num);
    }
    else{
        printf("\n%d is not a pixie number\n",num);
    }
    return 0;
}
