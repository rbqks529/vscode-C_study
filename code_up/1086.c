#include <stdio.h>

int main(void)
{
    int w, h, b;
    long int a;
    double mb;
    scanf("%d %d %d %d", &w, &h, &b);
    a = h*b*w;
    mb = (a/8) / (double)1048576;

    printf("%.2lf MB", mb);

    return 0;
}