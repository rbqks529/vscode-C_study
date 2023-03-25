#include <stdio.h>

int main(void)
{
    long int h, b, c, s;
    unsigned long int a;
    double mb;
    scanf("%ld %ld %ld %ld", &h, &b, &c, &s);
    a = h*b*c*s;
    mb = (a/8) / (double)1048576;

    printf("%.1lf MB", mb);

    return 0;
}