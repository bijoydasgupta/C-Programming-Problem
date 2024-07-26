#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c", &ch);

    (ch>='0'&&ch<='9') ? printf("The character is a digit\n") : printf("the character is not a digit\n");

    return 0;
}
