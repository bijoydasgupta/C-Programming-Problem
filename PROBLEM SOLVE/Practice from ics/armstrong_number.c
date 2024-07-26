#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    int temp=num, temp2=num;
    int count=0;
    while(temp!=0){
        count++;
        temp/=10;
    }
    int sum=0;
    while(temp2!=0){
        int digit=temp2%10;
        sum=sum+pow(digit,count);
        temp2/=10;
    }
    if(sum==num){
        printf("%d is an armstrong number\n",num);
    }
    else{
        printf("%d is not an armstrong number\n",num);
    }
    return 0;
}