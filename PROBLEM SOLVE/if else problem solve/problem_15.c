#include <stdio.h>
int main ()
{
    int x;
    scanf("%d", &x);

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n==x){
        printf("Right, Player-2 wins!\n");
    }
    else{
        printf("Wrong, 2 chances left!\n");
        printf("\nEnter any number: ");
        scanf("%d",&n);
        if(n==x){
            printf("Right, Player-2 wins!\n");
        }
        else{
            printf("Wrong, 1 chances left!\n");
            printf("\nEnter any number: ");
            scanf("%d",&n);
            if(n==x){
                printf("Right, Player-2 wins!\n");
            }
            else{
                printf("Wrong, 0 chances left!\n");
                printf("Player-1 wins\n");
            }
        }
    }
    return 0;
}