#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;

    int *arr = NULL;

    printf("학생의 수 : ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    for(i=0; i<n; i++)
    {
        
    }

    return 0;
}