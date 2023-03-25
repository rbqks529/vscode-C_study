#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int a, b, c, i;
    long long int r = 1;

    scanf("%lld", &a);
    scanf("%lld %lld", &b, &c);

    for(i=0; i<c-1; i++)
    {
        r = r * b;
    }

    printf("%lld", a*r);

    return 0;
}