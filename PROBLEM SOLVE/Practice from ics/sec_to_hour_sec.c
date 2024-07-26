#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);

    int hr = num/3600;
    int a = num%3600;
    int mint = a/60;
    int sec = a%60;

    printf("%d hour %d minute %d seconds\n",hr, mint,sec);
    return 0;
}