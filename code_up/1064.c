#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int result = (a>b ? b:a) > c ? c: (a>b ? b:a);
    printf("%d", result);

    return 0;
}