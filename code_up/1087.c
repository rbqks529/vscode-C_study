#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0, i = 1;

    scanf("%d", &num);

    for(i=1 ; sum<num; i++)
    {
        if(sum==num)
            break;
        else
            sum += i;
    }

    printf("%d", sum);

    return 0;
}