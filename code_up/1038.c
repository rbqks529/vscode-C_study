#include <stdio.h>

int main(void)
{
    unsigned long int a, b, sum;
    
    scanf("%lld %lld",&a, &b);
    sum = a+b;
    
    printf("%lld", sum);

    return 0;
}