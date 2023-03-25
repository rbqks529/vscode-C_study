#include <stdio.h>

int main(void)
{
    int i1 = 110;
    int i2 = 100;

    int *arr[2] = {&i1, &i2};

    printf("%d\n", arr);
    printf("%d\n", *arr);
    printf("%d\n", **arr);
    printf("%d\n", &arr[0]);
    printf("%d\n", arr[0]);
    printf("%d\n", *arr[0]);
    printf("%d\n", &i1);
    printf("%d\n", &i2);




    return 0;
}