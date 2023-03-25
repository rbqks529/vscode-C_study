#include <stdio.h>

int main(void)
{
    int num = 55;
    int sum = 0, i = 1;
    scanf("%d", &num);

    while(sum < num)
    {
        sum = sum + i++;
    }
    printf("%d", i-1);

    return 0;
} 