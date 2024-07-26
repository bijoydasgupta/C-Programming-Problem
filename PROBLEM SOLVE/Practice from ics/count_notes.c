#include <stdio.h>
int main ()
{
    int amount,notes500=0,notes100=0,notes50=0,notes10=0,notes20=0,notes5=0,notes2=0,notes1=0;
    scanf("%d",&amount);
    int given_amount=amount;

    notes500=amount/500;
    amount%=500;

    notes100=amount/100;
    amount%=100;

    notes50=amount/50;
    amount%=50;

    notes20=amount/20;
    amount%=20;

    notes10=amount/10;
    amount%=10;

    notes5=amount/5;
    amount%=5;

    notes2=amount/2;
    amount%=2;

    notes1=amount;

    printf("Notes of %d taka\n",given_amount);
    if(notes500!=0) printf("Notes500 - %d\n",notes500);
    if(notes100!=0) printf("Notes100 - %d\n",notes100);
    if(notes50!=0) printf("Notes50 - %d\n",notes50);
    if(notes20!=0) printf("Notes20 - %d\n",notes20);
    if(notes10!=0) printf("Notes10 - %d\n",notes10);
    if(notes5!=0) printf("Notes5 - %d\n",notes5);
    if(notes2!=0) printf("Notes2 - %d\n",notes2);
    if(notes1!=0) printf("Notes1 - %d\n",notes1);
    return 0;
}