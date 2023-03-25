#include <stdio.h>

int main(void)
{
    int year, month, day;
    char a;

    scanf("%d.%d.%d",&year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);

    return 0;
}