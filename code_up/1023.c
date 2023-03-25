#include <stdio.h>

int main(void)
{
    int j, i = 0;
    char arr[1000] = {1.234234};

    scanf("%s", arr);

    for(j=0; arr[j]!= '.'; j++)
    {
        printf("%c", arr[j]);
    }
    printf("\n");

    for(i=j+1; arr[i]!= '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}