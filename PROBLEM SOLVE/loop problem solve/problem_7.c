#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    getchar();
    int input = 1;
    while (ch != 'A')
    {
        if (ch >= 'B' && ch <= 'Z')
        {
            printf("Input %d: %c\n", input, ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("Input %d: %c\n", input, ch);
        }
        input++;
        scanf("%c", &ch);
        getchar();
    }
    return 0;
}