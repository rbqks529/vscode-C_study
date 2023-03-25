#include <stdio.h>

int main(void)
{
    long long int a, m, d;
    int n, i = 0;

    scanf("%lld %lld %lld %d", &a, &m, &d, &n);

    for(i=0; i<n-1; i++)
    {
        a = (a * m) + d;
    }
    
    printf("%lld", a);


    return 0;
}