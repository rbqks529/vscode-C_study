#include <stdio.h>

int main(void)
{
    char ch, i = 'a';

    scanf("%c", &ch);

    do
    {
        printf("%c ", i++);
    } while (i <= ch);
    


    return 0;
} 