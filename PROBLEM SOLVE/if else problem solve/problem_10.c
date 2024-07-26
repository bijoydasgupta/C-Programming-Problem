#include <stdio.h>
int main ()
{
    float num1, num2;
    char ch;
    scanf("%f %c %f",&num1,&ch,&num2);

    if(ch=='+'){
        printf("Addition: %f\n",num1+num2);
    }
    else if(ch=='-'){
        printf("Substraction: %f\n",num1-num2);
    }
    else if(ch=='*'){
        printf("Multiplication: %.0f\n",num1*num2);
    }
    else if(ch=='/'){
        if(num2!=0){
            printf("Division: %f\n",num1/num2);
        }
        else{
            printf("Division: Zero as divisor is not valid!\n");
        }
    }
    return 0;
}