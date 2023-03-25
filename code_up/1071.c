#include <stdio.h>

int main(void)
{
    int num;
    back:
    scanf("%d", &num);

    if(num != 0)
    {
        printf("%d\n", num);
        goto back;
    }



    return 0;
}