#include <stdio.h>

int f(int x)
{
    if (x > 0)
    {
        return x * f(x - 1);
    }
    else if (x == 0)
    {
        return 1;
    }
}

int main(void)
{
    int x = 0;
    scanf("%d", &x);
    printf("%d! = %d\n", 5, f(5));


    return 0;
}