#include <stdio.h>

int get_pipointNumber(int n)
{
    int pi_point[] = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    return pi_point[n-1];
}

int main(void)
{
    int pi_point[] = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    int input;
    printf("원주율의 소수점중 알고싶은 자릿수 입력(1~10) : ");
    scanf("%d", &input);

    printf("원주율의 %d자리의 숫자는 %d.\n", input, get_pipointNumber(input));

    return 0;
}