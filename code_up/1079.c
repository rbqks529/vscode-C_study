#include <stdio.h>

int main(void)
{
    char ch = 0;

    while(ch != 'q')
    {
        scanf("%c", &ch);
        getchar();
        printf("%c\n", ch);
    }

    return 0;
} 