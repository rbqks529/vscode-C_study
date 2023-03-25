#include <stdio.h>

void print(char str[])
{
    printf("%s\n", str);
}

int main(void)
{
    char p[] = "HelloWorld";
    char *a = p;
    a[1] = 'a';

    printf("%s\n", p);


    return 0;
}