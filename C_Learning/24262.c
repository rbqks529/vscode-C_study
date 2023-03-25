#include<stdio.h>

int main(void)
{
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    int x, y;
    x = a*n + b;
    y = c * n;
    
    if(x <= y && c-a >=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}