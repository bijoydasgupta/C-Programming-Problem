#include <stdio.h>
#include <math.h>
int main ()
{
    float num1, num2;
    scanf("%f %f",&num1,&num2);

    int choice;
    printf("Choices:\n");
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Addition: %.2f\n",num1+num2);
            break;
        case 2:
            printf("Substraction: %.2f\n",num1-num2);
            break;
        case 3:
            printf("Multiplication: %.0f\n",num1*num2);
            break;
        case 4:
            printf("1.Quotient\n2.Reminder\n");
            int case_choice;
            scanf("%d",&case_choice);
            if(case_choice==1){
                printf("Quotient: %.0f\n",(num1/num2)*-1);
            }
            else{
                printf("Reminder: %.0f\n",fmod(num1,num2));
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}