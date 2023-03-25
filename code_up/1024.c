#include <stdio.h>

int main(void)
{
    int i = 0;
    char arr[30];

    scanf("%s", arr);

    for(i=0; arr[i]!='\0'; i++)
    {
        printf("\'%c\'\n", arr[i]);
    }

    return 0;
}