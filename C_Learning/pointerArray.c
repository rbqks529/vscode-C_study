#include <stdio.h>

void fp(int (*p)[2])
{
    printf("p[1][1] : %d\n", *(*(p)));
}

int main(void)
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    fp(arr);

    return 0;
}